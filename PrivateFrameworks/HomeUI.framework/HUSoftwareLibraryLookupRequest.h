
@interface HUSoftwareLibraryLookupRequest : NSObject <NSCopying> {
    HMAccessory * _accessory;
    NSString * _bundleID;
    NSString * _storeID;
}

@property (nonatomic, readonly) HMAccessory *accessory;
@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) NSString *storeID;

- (void).cxx_destruct;
- (id)accessory;
- (id)bundleID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithAccessory:(id)arg1;
- (id)initWithBundleID:(id)arg1 storeID:(id)arg2;
- (id)storeID;

@end
