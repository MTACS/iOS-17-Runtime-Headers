
@interface HMDAccessoryAdvertisement : NSObject {
    HMAccessoryCategory * _category;
    NSString * _identifier;
    NSString * _name;
}

@property (readonly) long long associationOptions;
@property (nonatomic, readonly) HMAccessoryCategory *category;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *name;

- (void).cxx_destruct;
- (long long)associationOptions;
- (id)category;
- (id)description;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 category:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)name;
- (void)setCategory:(id)arg1;

@end
