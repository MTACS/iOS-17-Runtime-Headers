
@interface HMDPhotoLibraryPerson : HMFObject {
    NSUUID * _UUID;
    NSString * _name;
}

@property (readonly, copy) NSUUID *UUID;
@property (readonly, copy) NSString *name;

- (void).cxx_destruct;
- (id)UUID;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createHMPerson;
- (unsigned long long)hash;
- (id)initWithHMPerson:(id)arg1;
- (id)initWithUUID:(id)arg1 name:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)name;
- (void)updateHMPerson:(id)arg1;

@end
