
@interface BMIntelligencePlatformMessageTermsTermCount : BMEventBase <BMStoreData> {
    bool  _hasTermCount;
    BMIntelligencePlatformMessageTermsTermCountTerm * _term;
    int  _termCount;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasTermCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) BMIntelligencePlatformMessageTermsTermCountTerm *term;
@property (nonatomic, readonly) int termCount;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)description;
- (bool)hasTermCount;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithTerm:(id)arg1 termCount:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (void)setHasTermCount:(bool)arg1;
- (id)term;
- (int)termCount;
- (void)writeTo:(id)arg1;

@end
