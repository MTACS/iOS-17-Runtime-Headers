
@interface _BlastDoorLPPasswordsInviteMetadata : _BlastDoorLPSpecializationMetadata {
    NSString * _groupName;
    NSString * _urlParameters;
}

@property (nonatomic, copy) NSString *groupName;
@property (nonatomic, copy) NSString *urlParameters;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)groupName;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setGroupName:(id)arg1;
- (void)setUrlParameters:(id)arg1;
- (id)urlParameters;

@end
