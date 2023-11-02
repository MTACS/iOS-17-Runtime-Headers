
@interface PKShareRowItem : NSObject <PKIdentifiable> {
    CNContact * _contact;
    bool  _hasFetchedContact;
    UIImage * _icon;
    bool  _isAddShareItem;
    bool  _isStopSharingItem;
    PKPassShare * _share;
    bool  _shouldCenterText;
    bool  _showContactAvatar;
    NSString * _subtitle;
    NSString * _title;
    UIColor * _titleTextColor;
}

@property (nonatomic, retain) CNContact *contact;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasFetchedContact;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *icon;
@property (nonatomic, readonly) <NSCopying> *identifier;
@property (nonatomic) bool isAddShareItem;
@property (nonatomic) bool isStopSharingItem;
@property (nonatomic, retain) PKPassShare *share;
@property (nonatomic) bool shouldCenterText;
@property (nonatomic) bool showContactAvatar;
@property (nonatomic, retain) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) UIColor *titleTextColor;

- (void).cxx_destruct;
- (id)contact;
- (bool)hasFetchedContact;
- (unsigned long long)hash;
- (id)icon;
- (id)identifier;
- (bool)isAddShareItem;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToareRowItem:(id)arg1;
- (bool)isStopSharingItem;
- (void)setContact:(id)arg1;
- (void)setHasFetchedContact:(bool)arg1;
- (void)setIcon:(id)arg1;
- (void)setIsAddShareItem:(bool)arg1;
- (void)setIsStopSharingItem:(bool)arg1;
- (void)setShare:(id)arg1;
- (void)setShouldCenterText:(bool)arg1;
- (void)setShowContactAvatar:(bool)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleTextColor:(id)arg1;
- (id)share;
- (bool)shouldCenterText;
- (bool)showContactAvatar;
- (id)subtitle;
- (id)title;
- (id)titleTextColor;

@end
