
@interface ANSTConfiguration : NSObject {
    long long  _networkEngineType;
    unsigned int  _qualityOfService;
    unsigned long long  _version;
}

@property (nonatomic) long long networkEngineType;
@property (nonatomic) unsigned int qualityOfService;
@property (nonatomic, readonly) unsigned long long version;

+ (id)new;

- (id)init;
- (id)initWithVersion:(unsigned long long)arg1;
- (long long)networkEngineType;
- (unsigned int)qualityOfService;
- (void)setNetworkEngineType:(long long)arg1;
- (void)setQualityOfService:(unsigned int)arg1;
- (unsigned long long)version;

@end
