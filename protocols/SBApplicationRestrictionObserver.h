
@protocol SBApplicationRestrictionObserver <NSObject>

@required

- (void)applicationRestrictionController:(SBApplicationRestrictionController *)arg1 didUpdateVisibleTags:(NSSet *)arg2 hiddenTags:(NSSet *)arg3;

@end
