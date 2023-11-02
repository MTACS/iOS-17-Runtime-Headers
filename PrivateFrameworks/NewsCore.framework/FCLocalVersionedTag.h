
@interface FCLocalVersionedTag : NSObject {
    NSString * _identifier;
    long long  _maxVersion;
    long long  _minVersion;
}

@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) long long maxVersion;
@property (nonatomic) long long minVersion;

- (void).cxx_destruct;
- (id)identifier;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (long long)maxVersion;
- (long long)minVersion;
- (void)setIdentifier:(id)arg1;
- (void)setMaxVersion:(long long)arg1;
- (void)setMinVersion:(long long)arg1;

@end
