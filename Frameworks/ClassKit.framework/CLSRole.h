
@interface CLSRole : CLSObject {
    bool  _isEditable;
    NSArray * _privileges;
    long long  _sourceType;
    long long  _type;
}

@property bool isEditable;
@property (nonatomic, copy) NSArray *privileges;
@property (nonatomic) long long sourceType;
@property (nonatomic) long long type;

+ (id)stringForRoleType:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_init;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEditable;
- (id)privileges;
- (void)setIsEditable:(bool)arg1;
- (void)setPrivileges:(id)arg1;
- (void)setSourceType:(long long)arg1;
- (void)setType:(long long)arg1;
- (long long)sourceType;
- (long long)type;

@end
