
@interface CRKASMConcreteOrganization : NSObject <CRKASMOrganization> {
    NSUUID * _UUID;
    NSString * _name;
}

@property (nonatomic, readonly) NSUUID *UUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *name;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)UUID;
- (id)description;
- (unsigned long long)hash;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)name;

@end
