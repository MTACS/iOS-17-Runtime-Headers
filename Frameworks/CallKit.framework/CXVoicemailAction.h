
@interface CXVoicemailAction : CXAction {
    NSUUID * _voicemailUUID;
}

@property (nonatomic, copy) NSUUID *voicemailUUID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithVoicemailUUID:(id)arg1;
- (id)sanitizedCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setVoicemailUUID:(id)arg1;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone { }*)arg2;
- (id)voicemailUUID;

@end
