
@interface UNMutableNotificationCategory : UNNotificationCategory

@property (nonatomic, copy) NSArray *actions;
@property (nonatomic, copy) NSString *actionsMenuTitle;
@property (nonatomic, copy) UNNotificationAction *alternateAction;
@property (nonatomic) unsigned long long backgroundStyle;
@property (nonatomic, copy) NSString *categorySummaryFormat;
@property (nonatomic, copy) NSString *hiddenPreviewsBodyPlaceholder;
@property (nonatomic, copy) NSArray *intentIdentifiers;
@property (nonatomic) unsigned long long listPriority;
@property (nonatomic, copy) NSArray *minimalActions;
@property (nonatomic) unsigned long long options;

- (id)initWithIdentifier:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setActions:(id)arg1;
- (void)setActionsMenuTitle:(id)arg1;
- (void)setAlternateAction:(id)arg1;
- (void)setBackgroundStyle:(unsigned long long)arg1;
- (void)setCategorySummaryFormat:(id)arg1;
- (void)setHiddenPreviewsBodyPlaceholder:(id)arg1;
- (void)setIntentIdentifiers:(id)arg1;
- (void)setListPriority:(unsigned long long)arg1;
- (void)setMinimalActions:(id)arg1;
- (void)setOptions:(unsigned long long)arg1;

@end
