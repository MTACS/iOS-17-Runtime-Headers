
@interface CXSetPlayedVoicemailAction : CXVoicemailAction {
    bool  _played;
}

@property (getter=isPlayed, nonatomic) bool played;

+ (bool)supportsSecureCoding;

- (id)customDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithVoicemailUUID:(id)arg1 played:(bool)arg2;
- (bool)isPlayed;
- (void)setPlayed:(bool)arg1;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone { }*)arg2;

@end
