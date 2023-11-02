
@interface HUQuickControlIconViewController : HUQuickControlSingleControlViewController {
    HUQuickControlIconView * _quickControlIconView;
}

@property (nonatomic, readonly) HFDictionaryValueControlItem *controlItem;
@property (nonatomic, retain) HUQuickControlIconView *quickControlIconView;
@property (nonatomic, readonly) HUQuickControlIconViewProfile *viewProfile;

+ (Class)controlItemClass;
+ (id)controlItemPredicate;

- (void).cxx_destruct;
- (id)createInteractionCoordinator;
- (id)createViewProfile;
- (id)quickControlIconView;
- (void)setQuickControlIconView:(id)arg1;

@end
