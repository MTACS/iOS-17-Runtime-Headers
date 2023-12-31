
@interface _ICMusicSubscriptionLeaseIdentityCacheKey : NSObject <NSCopying> {
    NSNumber * _DSID;
    NSString * _carrierBundleDeviceIdentifier;
    NSNumber * _delegatedDSID;
}

@property (nonatomic, readonly, copy) NSNumber *DSID;
@property (nonatomic, readonly, copy) NSString *carrierBundleDeviceIdentifier;
@property (nonatomic, readonly, copy) NSNumber *delegatedDSID;

- (void).cxx_destruct;
- (id)DSID;
- (id)carrierBundleDeviceIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegatedDSID;
- (unsigned long long)hash;
- (id)initWithDSID:(id)arg1 carrierBundleDeviceIdentifier:(id)arg2 delegatedDSID:(id)arg3;
- (bool)isEqual:(id)arg1;

@end
