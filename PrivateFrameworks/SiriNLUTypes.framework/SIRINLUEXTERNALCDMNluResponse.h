
@interface SIRINLUEXTERNALCDMNluResponse : PBCodable <NSCopying> {
    SIRINLUEXTERNALLanguageVariantResult * _languageVariantResult;
    NSMutableArray * _parses;
    NSMutableArray * _repetitionResults;
    SIRINLUEXTERNALRequestID * _requestId;
    SIRINLUEXTERNALResponseStatus * _responseStatus;
    SIRINLUEXTERNALNLUSupplementaryOutput * _supplementaryOutput;
}

@property (nonatomic, retain) NSString *debugText;
@property (nonatomic, readonly) bool hasLanguageVariantResult;
@property (nonatomic, readonly) bool hasRequestId;
@property (nonatomic, readonly) bool hasResponseStatus;
@property (nonatomic, readonly) bool hasSupplementaryOutput;
@property (nonatomic, retain) SIRINLUEXTERNALLanguageVariantResult *languageVariantResult;
@property (nonatomic, retain) NSMutableArray *parses;
@property (nonatomic, retain) NSMutableArray *repetitionResults;
@property (nonatomic, retain) SIRINLUEXTERNALRequestID *requestId;
@property (nonatomic, retain) SIRINLUEXTERNALResponseStatus *responseStatus;
@property (nonatomic, retain) SIRINLUEXTERNALNLUSupplementaryOutput *supplementaryOutput;

// Image: /System/Library/PrivateFrameworks/SiriNLUTypes.framework/SiriNLUTypes

+ (Class)parsesType;
+ (Class)repetitionResultsType;

- (void).cxx_destruct;
- (void)addParses:(id)arg1;
- (void)addRepetitionResults:(id)arg1;
- (void)clearParses;
- (void)clearRepetitionResults;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLanguageVariantResult;
- (bool)hasRequestId;
- (bool)hasResponseStatus;
- (bool)hasSupplementaryOutput;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)languageVariantResult;
- (void)mergeFrom:(id)arg1;
- (id)parses;
- (id)parsesAtIndex:(unsigned long long)arg1;
- (unsigned long long)parsesCount;
- (bool)readFrom:(id)arg1;
- (id)repetitionResults;
- (id)repetitionResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)repetitionResultsCount;
- (id)requestId;
- (id)responseStatus;
- (void)setLanguageVariantResult:(id)arg1;
- (void)setParses:(id)arg1;
- (void)setRepetitionResults:(id)arg1;
- (void)setRequestId:(id)arg1;
- (void)setResponseStatus:(id)arg1;
- (void)setSupplementaryOutput:(id)arg1;
- (id)supplementaryOutput;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CDMFoundation.framework/CDMFoundation

- (id)debugText;
- (void)setDebugText:(id)arg1;

@end
