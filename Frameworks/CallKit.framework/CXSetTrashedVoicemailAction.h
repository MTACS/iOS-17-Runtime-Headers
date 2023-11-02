
@interface CXSetTrashedVoicemailAction : CXVoicemailAction {
    bool  _trashed;
}

@property (getter=isTrashed, nonatomic) bool trashed;

+ (bool)supportsSecureCoding;

- (id)customDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithVoicemailUUID:(id)arg1 trashed:(bool)arg2;
- (bool)isTrashed;
- (void)setTrashed:(bool)arg1;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone { }*)arg2;

@end
