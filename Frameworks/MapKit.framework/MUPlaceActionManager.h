
@interface MUPlaceActionManager : MKPlaceActionManager

@property (nonatomic, readonly) <_MKInfoCardAnalyticsDelegate><_MKPlaceCardConforming><MKPlaceCardActionControllerDelegate> *delegate;

- (void)_addAddressFooterActions:(id)arg1;
- (void)_addBasicFooterActions:(id)arg1;
- (void)_addDroppedPinFooterActions:(id)arg1;
- (void)_addHomeActionIfNeeded:(id)arg1;
- (void)_addItemIfInMapsApp:(id)arg1 actions:(id)arg2;
- (void)_addMyLocationFooterActions:(id)arg1;
- (bool)_showWebsite;
- (id)createFooterActions;
- (id)createMenuActions;
- (id)delegate;

@end
