
@interface SKAPFSVolumeDescriptor : SKVolumeDescriptor {
    NSString * _password;
}

@property (nonatomic, readonly, copy) NSString *password;

+ (id)descriptorWithName:(id)arg1 caseSensitive:(bool)arg2;
+ (id)descriptorWithName:(id)arg1 caseSensitive:(bool)arg2 password:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 caseSensitive:(bool)arg2 password:(id)arg3;
- (id)password;

@end
