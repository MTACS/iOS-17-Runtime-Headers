
@interface PKPaymentSetupListItem : NSObject <NSCopying, PKIdentifiable> {
    NSString * _badgeText;
    bool  _displayChevron;
    bool  _displayInfo;
    UIImage * _icon;
    NSString * _identifier;
    NSString * _labelText;
    bool  _loadingIndicatorVisible;
    bool  _reserverSpaceForSelectedAccessory;
    bool  _selected;
    NSString * _subtitle;
    NSString * _title;
    bool  _useMultiSelectAccessory;
}

@property (nonatomic, retain) NSString *badgeText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool displayChevron;
@property (nonatomic) bool displayInfo;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *icon;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *labelText;
@property (nonatomic) bool loadingIndicatorVisible;
@property (nonatomic) bool reserverSpaceForSelectedAccessory;
@property (nonatomic) bool selected;
@property (nonatomic, retain) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *title;
@property (nonatomic) bool useMultiSelectAccessory;

- (void).cxx_destruct;
- (id)badgeText;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)displayChevron;
- (bool)displayInfo;
- (unsigned long long)hash;
- (id)icon;
- (id)identifier;
- (id)init;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 icon:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)labelText;
- (bool)loadingIndicatorVisible;
- (bool)reserverSpaceForSelectedAccessory;
- (bool)selected;
- (void)setBadgeText:(id)arg1;
- (void)setDisplayChevron:(bool)arg1;
- (void)setDisplayInfo:(bool)arg1;
- (void)setIcon:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLabelText:(id)arg1;
- (void)setLoadingIndicatorVisible:(bool)arg1;
- (void)setReserverSpaceForSelectedAccessory:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUseMultiSelectAccessory:(bool)arg1;
- (id)subtitle;
- (id)title;
- (bool)useMultiSelectAccessory;

@end
