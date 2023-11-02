
@interface AVTAnimojiDescriptor : AVTAvatarDescriptor {
    NSString * _name;
}

@property (nonatomic, copy) NSString *name;

+ (unsigned char)classIdentifier;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeInDictionaryRepresentation:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAnimoji:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1 error:(id*)arg2;
- (id)initWithName:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;

@end
