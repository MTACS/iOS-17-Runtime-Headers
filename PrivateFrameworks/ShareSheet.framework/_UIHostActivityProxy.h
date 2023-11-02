
@interface _UIHostActivityProxy : NSObject <SHSheetContentActivityProxy> {
    UIActivity * _activity;
    NSAttributedString * _activityFooter;
    NSUUID * _activityIdentifierCopy;
    NSUUID * _activityIdentifierOpen;
    NSUUID * _activityIdentifierShare;
    SFProxyText * _activityTitle;
    NSString * _applicationBundleIdentifier;
    _Atomic unsigned int  _iconImageSlotID;
    NSUUID * _identifier;
    bool  _isDisabled;
    bool  _isFavorite;
    bool  _isRestricted;
    bool  _isUserDefaultsActivity;
    _Atomic unsigned int  _labelSlotID;
    id /* block */  _loadHandler;
    _Atomic double  _slotTextHeight;
}

@property (nonatomic, readonly) UIActivity *activity;
@property (nonatomic, copy) NSAttributedString *activityFooter;
@property (nonatomic, retain) NSUUID *activityIdentifierCopy;
@property (nonatomic, retain) NSUUID *activityIdentifierOpen;
@property (nonatomic, retain) NSUUID *activityIdentifierShare;
@property (nonatomic, retain) SFProxyText *activityTitle;
@property (nonatomic, copy) NSString *applicationBundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned int iconImageSlotID;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic) bool isDisabled;
@property (nonatomic) bool isFavorite;
@property (nonatomic) bool isRestricted;
@property (nonatomic) bool isUserDefaultsActivity;
@property (nonatomic, copy) id /* block */ loadHandler;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activity;
- (id)activityFooter;
- (id)activityIdentifierCopy;
- (id)activityIdentifierOpen;
- (id)activityIdentifierShare;
- (id)activityTitle;
- (id)applicationBundleIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (unsigned int)iconImageSlotID;
- (id)identifier;
- (unsigned int)imageSlotID;
- (id)initWithActivity:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isDisabled;
- (bool)isEqual:(id)arg1;
- (bool)isFavorite;
- (bool)isRestricted;
- (bool)isUserDefaultsActivity;
- (unsigned int)labelSlotID;
- (bool)load;
- (id /* block */)loadHandler;
- (void)setActivityFooter:(id)arg1;
- (void)setActivityIdentifierCopy:(id)arg1;
- (void)setActivityIdentifierOpen:(id)arg1;
- (void)setActivityIdentifierShare:(id)arg1;
- (void)setActivityTitle:(id)arg1;
- (void)setApplicationBundleIdentifier:(id)arg1;
- (void)setIconImageSlotID:(unsigned int)arg1;
- (void)setIsDisabled:(bool)arg1;
- (void)setIsFavorite:(bool)arg1;
- (void)setIsRestricted:(bool)arg1;
- (void)setIsUserDefaultsActivity:(bool)arg1;
- (void)setLabelSlotID:(unsigned int)arg1;
- (void)setLoadHandler:(id /* block */)arg1;
- (void)setSlotTextHeight:(double)arg1;
- (double)slotTextHeight;

@end
