
@interface APOdmlAppInfo : NSObject {
    unsigned long long  _adamID;
    NSString * _bundleID;
}

@property (nonatomic) unsigned long long adamID;
@property (nonatomic, retain) NSString *bundleID;

- (void).cxx_destruct;
- (unsigned long long)adamID;
- (id)bundleID;
- (unsigned long long)hash;
- (id)initWithBundleID:(id)arg1 adamID:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (void)setAdamID:(unsigned long long)arg1;
- (void)setBundleID:(id)arg1;

@end
