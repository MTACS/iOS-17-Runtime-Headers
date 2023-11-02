
@interface BMDictationUserEdit : BMEventBase <BMStoreData> {
    NSArray * _alternativeSelections;
    NSString * _asrID;
    NSString * _correctedText;
    unsigned int  _endIndex;
    bool  _hasEndIndex;
    bool  _hasStartIndex;
    NSString * _interactionID;
    BMDictationUserEditRequestMetadata * _metadata;
    NSString * _recognizedText;
    NSArray * _recognizedTokens;
    unsigned int  _startIndex;
}

@property (nonatomic, readonly) NSArray *alternativeSelections;
@property (nonatomic, readonly) NSString *asrID;
@property (nonatomic, readonly) NSString *correctedText;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned int endIndex;
@property (nonatomic) bool hasEndIndex;
@property (nonatomic) bool hasStartIndex;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *interactionID;
@property (nonatomic, readonly) BMDictationUserEditRequestMetadata *metadata;
@property (nonatomic, readonly) NSString *recognizedText;
@property (nonatomic, readonly) NSArray *recognizedTokens;
@property (nonatomic, readonly) unsigned int startIndex;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)_alternativeSelectionsJSONArray;
- (id)_recognizedTokensJSONArray;
- (id)alternativeSelections;
- (id)asrID;
- (id)correctedText;
- (unsigned int)dataVersion;
- (id)description;
- (unsigned int)endIndex;
- (bool)hasEndIndex;
- (bool)hasStartIndex;
- (id)initByReadFrom:(id)arg1;
- (id)initWithAsrID:(id)arg1 interactionID:(id)arg2 metadata:(id)arg3 startIndex:(id)arg4 endIndex:(id)arg5 correctedText:(id)arg6 recognizedText:(id)arg7 recognizedTokens:(id)arg8 alternativeSelections:(id)arg9;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)interactionID;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)metadata;
- (id)recognizedText;
- (id)recognizedTokens;
- (id)serialize;
- (void)setHasEndIndex:(bool)arg1;
- (void)setHasStartIndex:(bool)arg1;
- (unsigned int)startIndex;
- (void)writeTo:(id)arg1;

@end
