
@interface BMKeyboardTokenFrequencyTokenFrequency : BMEventBase <BMStoreData> {
    int  _count;
    bool  _hasCount;
    NSString * _token;
}

@property (nonatomic, readonly) int count;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *token;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (int)count;
- (unsigned int)dataVersion;
- (id)description;
- (bool)hasCount;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithToken:(id)arg1 count:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (void)setHasCount:(bool)arg1;
- (id)token;
- (void)writeTo:(id)arg1;

@end
