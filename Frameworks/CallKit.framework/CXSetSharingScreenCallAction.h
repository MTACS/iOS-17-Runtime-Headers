
@interface CXSetSharingScreenCallAction : CXCallAction {
    CXScreenShareAttributes * _attributes;
    bool  _sharingScreen;
}

@property (nonatomic, retain) CXScreenShareAttributes *attributes;
@property (getter=isSharingScreen, nonatomic) bool sharingScreen;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributes;
- (id)customDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCallUUID:(id)arg1 sharingScreen:(bool)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isSharingScreen;
- (void)setAttributes:(id)arg1;
- (void)setSharingScreen:(bool)arg1;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone { }*)arg2;

@end
