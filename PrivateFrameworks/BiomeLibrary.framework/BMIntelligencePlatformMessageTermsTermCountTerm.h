
@interface BMIntelligencePlatformMessageTermsTermCountTerm : BMEventBase <BMStoreData> {
    bool  _hasTermID;
    long long  _termID;
    NSString * _termString;
    int  _termType;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasTermID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long termID;
@property (nonatomic, readonly) NSString *termString;
@property (nonatomic, readonly) int termType;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)description;
- (bool)hasTermID;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithTermType:(int)arg1 termString:(id)arg2 termID:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (void)setHasTermID:(bool)arg1;
- (long long)termID;
- (id)termString;
- (int)termType;
- (void)writeTo:(id)arg1;

@end
