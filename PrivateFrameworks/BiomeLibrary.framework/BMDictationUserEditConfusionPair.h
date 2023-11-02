
@interface BMDictationUserEditConfusionPair : BMEventBase <BMStoreData> {
    NSArray * _correctedTokens;
    bool  _hasIndex;
    unsigned int  _index;
    NSArray * _recognizedTokens;
}

@property (nonatomic, readonly) NSArray *correctedTokens;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasIndex;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned int index;
@property (nonatomic, readonly) NSArray *recognizedTokens;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)_correctedTokensJSONArray;
- (id)_recognizedTokensJSONArray;
- (id)correctedTokens;
- (unsigned int)dataVersion;
- (id)description;
- (bool)hasIndex;
- (unsigned int)index;
- (id)initByReadFrom:(id)arg1;
- (id)initWithIndex:(id)arg1 recognizedTokens:(id)arg2 correctedTokens:(id)arg3;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)recognizedTokens;
- (id)serialize;
- (void)setHasIndex:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
