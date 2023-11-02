
@interface CKAssetDownloadStagingInfo : NSObject <CKPropertiesDescription, NSSecureCoding> {
    NSNumber * _itemID;
    NSData * _signature;
    NSString * _trackingUUID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSNumber *itemID;
@property (nonatomic, readonly, copy) NSData *signature;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *trackingUUID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)CKDescribePropertiesUsing:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemID:(id)arg1 trackingUUID:(id)arg2 signature:(id)arg3;
- (id)itemID;
- (id)redactedDescription;
- (id)signature;
- (id)trackingUUID;

@end
