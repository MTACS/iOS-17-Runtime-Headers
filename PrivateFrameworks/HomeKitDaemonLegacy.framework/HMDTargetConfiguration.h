
@interface HMDTargetConfiguration : HMFObject {
    NSArray * _buttonConfiguration;
    long long  _category;
    NSNumber * _identifier;
    NSString * _name;
    NSUUID * _uuid;
}

@property (nonatomic, retain) NSArray *buttonConfiguration;
@property (nonatomic, readonly) long long category;
@property (nonatomic, readonly) NSNumber *identifier;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, readonly) NSUUID *uuid;

- (void).cxx_destruct;
- (id)buttonConfiguration;
- (long long)category;
- (id)description;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithAccessory:(id)arg1 buttonConfiguration:(id)arg2;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 category:(long long)arg3 buttonConfiguration:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)name;
- (void)setButtonConfiguration:(id)arg1;
- (void)setName:(id)arg1;
- (id)uuid;

@end
