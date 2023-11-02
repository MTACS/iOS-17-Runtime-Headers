
@interface BMDeviceTimeZone : BMEventBase <BMStoreData> {
    bool  _hasSecondsFromGMT;
    NSString * _name;
    double  _secondsFromGMT;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasSecondsFromGMT;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) double secondsFromGMT;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)description;
- (bool)hasSecondsFromGMT;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithSecondsFromGMT:(id)arg1;
- (id)initWithSecondsFromGMT:(id)arg1 name:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)name;
- (double)secondsFromGMT;
- (id)serialize;
- (void)setHasSecondsFromGMT:(bool)arg1;
- (id)timeZone;
- (void)writeTo:(id)arg1;

@end
