
@interface CXSetGroupCallAction : CXCallAction {
    NSUUID * _callUUIDToGroupWith;
}

@property (nonatomic, copy) NSUUID *callUUIDToGroupWith;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)callUUIDToGroupWith;
- (id)customDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCallUUID:(id)arg1 callUUIDToGroupWith:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)setCallUUIDToGroupWith:(id)arg1;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone { }*)arg2;

@end
