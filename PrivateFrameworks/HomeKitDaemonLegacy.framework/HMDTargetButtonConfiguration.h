
@interface HMDTargetButtonConfiguration : HMFObject {
    unsigned char  _identifier;
    NSString * _name;
    long long  _type;
}

@property (nonatomic, readonly) unsigned char identifier;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (id)buttonName;
- (id)description;
- (unsigned long long)hash;
- (unsigned char)identifier;
- (id)init;
- (id)initWithType:(long long)arg1 identifier:(id)arg2 name:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (void)setType:(long long)arg1;
- (id)shortDescription;
- (long long)type;

@end
