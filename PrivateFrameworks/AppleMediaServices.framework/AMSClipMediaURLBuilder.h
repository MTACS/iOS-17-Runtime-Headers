
@interface AMSClipMediaURLBuilder : NSObject {
    <AMSBagProtocol> * _bag;
    NSString * _bundleID;
    NSNumber * _externalVersionID;
}

@property (nonatomic, retain) <AMSBagProtocol> *bag;
@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic, retain) NSNumber *externalVersionID;

- (void).cxx_destruct;
- (id)_devicePlatform;
- (id)_hostPromise;
- (id)_pathPromise;
- (id)_queryPromise;
- (id)bag;
- (id)build;
- (id)bundleID;
- (id)externalVersionID;
- (id)initWithBundleID:(id)arg1 bag:(id)arg2;
- (void)setBag:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setExternalVersionID:(id)arg1;

@end
