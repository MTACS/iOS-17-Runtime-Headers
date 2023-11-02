
@interface HMDAddAccessoryProgressState : HMFObject {
    NSString * _accessoryName;
    NSUUID * _accessoryUUID;
    HMAccessoryCategory * _category;
    unsigned long long  _certificationStatus;
    NSString * _manufacturerName;
    NSString * _productData;
}

@property (nonatomic, readonly) NSString *accessoryName;
@property (nonatomic, readonly) NSUUID *accessoryUUID;
@property (nonatomic, readonly) HMAccessoryCategory *category;
@property (nonatomic, readonly) unsigned long long certificationStatus;
@property (nonatomic, readonly) NSString *manufacturerName;
@property (nonatomic, readonly) NSString *productData;

- (void).cxx_destruct;
- (id)accessoryName;
- (id)accessoryUUID;
- (id)category;
- (unsigned long long)certificationStatus;
- (id)description;
- (id)initWithUUID:(id)arg1 accessoryName:(id)arg2 manufacturerName:(id)arg3 category:(id)arg4 certificationStatus:(unsigned long long)arg5 productData:(id)arg6;
- (id)manufacturerName;
- (id)productData;

@end
