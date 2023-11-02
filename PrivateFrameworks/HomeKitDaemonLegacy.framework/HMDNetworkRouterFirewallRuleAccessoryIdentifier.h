
@interface HMDNetworkRouterFirewallRuleAccessoryIdentifier : HMFObject <NSCopying> {
    HMFVersion * _firmwareVersion;
    NSString * _productGroup;
    NSString * _productNumber;
}

@property (nonatomic, readonly) NSString *cloudKitRecordName;
@property (nonatomic, readonly) NSString *cloudKitZoneName;
@property (nonatomic, readonly) HMFVersion *firmwareVersion;
@property (nonatomic, readonly) NSString *productGroup;
@property (nonatomic, readonly) NSString *productNumber;

+ (id)createWithProductData:(id)arg1 firmwareVersion:(id)arg2;
+ (id)identifierFromRecordID:(id)arg1;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)cloudKitRecordID;
- (id)cloudKitRecordName;
- (id)cloudKitZoneName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)firmwareVersion;
- (unsigned long long)hash;
- (id)initWithProductGroup:(id)arg1 productNumber:(id)arg2 firmwareVersion:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)productGroup;
- (id)productNumber;

@end
