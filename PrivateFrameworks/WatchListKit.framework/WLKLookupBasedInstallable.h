
@interface WLKLookupBasedInstallable : NSObject <WLKInstallable> {
    AMSLookupItem * _item;
}

@property (nonatomic, readonly, copy) NSArray *appAdamIDs;
@property (nonatomic, readonly, copy) NSArray *appBundleIDs;
@property (nonatomic, readonly, copy) NSURL *appStoreURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool forceDSIDlessInstall;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) AMSLookupItem *item;
@property (nonatomic, readonly, copy) NSString *name;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *title;

- (void).cxx_destruct;
- (id)appAdamIDs;
- (id)appBundleIDs;
- (id)appIconURLForSize:(struct CGSize { double x1; double x2; })arg1;
- (id)appStoreURL;
- (id)init;
- (id)initWithLookupItem:(id)arg1;
- (id)item;
- (id)name;
- (id)title;

@end
