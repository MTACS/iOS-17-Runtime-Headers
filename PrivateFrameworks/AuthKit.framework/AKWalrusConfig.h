
@interface AKWalrusConfig : NSObject {
    long long  _featureStatus;
    NSString * _localizedStatusDescription;
}

@property (nonatomic) long long featureStatus;
@property (nonatomic, retain) NSString *localizedStatusDescription;

- (void).cxx_destruct;
- (id)description;
- (long long)featureStatus;
- (id)localizedStatusDescription;
- (void)setFeatureStatus:(long long)arg1;
- (void)setLocalizedStatusDescription:(id)arg1;

@end
