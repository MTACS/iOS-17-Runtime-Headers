
@interface _UIUserDefaultsActivityProxy : NSObject <SHSheetUserDefaultActivityProxy> {
    SFProxyText * _activityTitle;
    NSString * _applicationBundleIdentifier;
    bool  _canEdit;
    bool  _canHide;
    bool  _canMove;
    unsigned int  _iconImageSlotID;
    NSUUID * _identifier;
    bool  _isDisabled;
    bool  _isHidden;
}

@property (nonatomic, retain) SFProxyText *activityTitle;
@property (nonatomic, copy) NSString *applicationBundleIdentifier;
@property (nonatomic) bool canEdit;
@property (nonatomic) bool canHide;
@property (nonatomic) bool canMove;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned int iconImageSlotID;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic) bool isDisabled;
@property (nonatomic) bool isHidden;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activityTitle;
- (id)applicationBundleIdentifier;
- (bool)canEdit;
- (bool)canHide;
- (bool)canMove;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)iconImageSlotID;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (bool)isDisabled;
- (bool)isHidden;
- (id)labelSlot;
- (void)setActivityTitle:(id)arg1;
- (void)setApplicationBundleIdentifier:(id)arg1;
- (void)setCanEdit:(bool)arg1;
- (void)setCanHide:(bool)arg1;
- (void)setCanMove:(bool)arg1;
- (void)setIconImageSlotID:(unsigned int)arg1;
- (void)setIsDisabled:(bool)arg1;
- (void)setIsHidden:(bool)arg1;

@end
