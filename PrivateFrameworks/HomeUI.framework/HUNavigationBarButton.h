
@interface HUNavigationBarButton : UIBarButtonItem {
    void $__lazy_storage_$_badgeSpacerView;
    void $__lazy_storage_$_badgeView;
    void $__lazy_storage_$_tapGestureRecognizer;
    void actionHandler;
    void badgeValue;
    void identifier;
    void owner;
}

@property (nonatomic) SEL action;
@property (nonatomic, retain) NSNumber *badgeValue;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) UIMenu *menu;
@property (nonatomic) <HUNavigationBarButtonOwner> *owner;
@property (nonatomic, retain) id target;

+ (id)addButtonWithOwner:(id)arg1;
+ (id)announceButtonWithOwner:(id)arg1;
+ (id)editDoneButtonWithOwner:(id)arg1;
+ (id)homeButtonWithOwner:(id)arg1;

- (void).cxx_destruct;
- (SEL)action;
- (id)badgeValue;
- (id)description;
- (id)font;
- (void)handleTap:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)menu;
- (id)owner;
- (void)performAction;
- (void)setAction:(SEL)arg1;
- (void)setBadgeValue:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMenu:(id)arg1;
- (void)setOwner:(id)arg1;
- (void)setTarget:(id)arg1;
- (id)target;

@end
