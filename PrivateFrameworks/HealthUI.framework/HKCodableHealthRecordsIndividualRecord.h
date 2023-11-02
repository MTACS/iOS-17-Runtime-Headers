
@interface HKCodableHealthRecordsIndividualRecord : PBCodable <NSCopying> {
    NSMutableArray * _codes;
    double  _dateData;
    struct APPLE_HKCodableHealthRecordsIndividualRecord_1 { 
        unsigned int dateData : 1; 
    }  _has;
    NSString * _providerURI;
    NSString * _recordTitle;
    NSString * _recordUUID;
    NSString * _textualValue;
    NSString * _ucumUnitString;
    NSMutableArray * _valueWithRanges;
}

@property (nonatomic, retain) NSMutableArray *codes;
@property (nonatomic) double dateData;
@property (nonatomic) bool hasDateData;
@property (nonatomic, readonly) bool hasProviderURI;
@property (nonatomic, readonly) bool hasRecordTitle;
@property (nonatomic, readonly) bool hasRecordUUID;
@property (nonatomic, readonly) bool hasTextualValue;
@property (nonatomic, readonly) bool hasUcumUnitString;
@property (nonatomic, retain) NSString *providerURI;
@property (nonatomic, retain) NSString *recordTitle;
@property (nonatomic, retain) NSString *recordUUID;
@property (nonatomic, retain) NSString *textualValue;
@property (nonatomic, retain) NSString *ucumUnitString;
@property (nonatomic, retain) NSMutableArray *valueWithRanges;

+ (Class)codeType;
+ (Class)valueWithRangeType;

- (void).cxx_destruct;
- (void)addCode:(id)arg1;
- (void)addValueWithRange:(id)arg1;
- (void)clearCodes;
- (void)clearValueWithRanges;
- (id)codeAtIndex:(unsigned long long)arg1;
- (id)codes;
- (unsigned long long)codesCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)dateData;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDateData;
- (bool)hasProviderURI;
- (bool)hasRecordTitle;
- (bool)hasRecordUUID;
- (bool)hasTextualValue;
- (bool)hasUcumUnitString;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)providerURI;
- (bool)readFrom:(id)arg1;
- (id)recordTitle;
- (id)recordUUID;
- (void)setCodes:(id)arg1;
- (void)setDateData:(double)arg1;
- (void)setHasDateData:(bool)arg1;
- (void)setProviderURI:(id)arg1;
- (void)setRecordTitle:(id)arg1;
- (void)setRecordUUID:(id)arg1;
- (void)setTextualValue:(id)arg1;
- (void)setUcumUnitString:(id)arg1;
- (void)setValueWithRanges:(id)arg1;
- (id)textualValue;
- (id)ucumUnitString;
- (id)valueWithRangeAtIndex:(unsigned long long)arg1;
- (id)valueWithRanges;
- (unsigned long long)valueWithRangesCount;
- (void)writeTo:(id)arg1;

@end
