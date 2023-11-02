
@interface DDRevealBridge : NSObject

+ (id)_lookupTextForText:(id)arg1;
+ (bool)_revealItem:(id)arg1 view:(id)arg2 location:(struct CGPoint { double x1; double x2; })arg3 menuInteraction:(id)arg4 context:(id)arg5;
+ (bool)_textActionsAreAvailableForItem:(id)arg1;
+ (id)contextMenuConfigurationWithRVItem:(id)arg1 view:(id)arg2 context:(id)arg3 menuIdentifier:(id)arg4;
+ (bool)performDefaultActionForRVItem:(id)arg1 view:(id)arg2 location:(struct CGPoint { double x1; double x2; })arg3 fallbackMenuInteraction:(id)arg4 context:(id)arg5;
+ (bool)underlyingViewDisappeared:(id)arg1;
+ (id)updatedTextInteractionMenuElements:(id)arg1 withRVItem:(id)arg2 view:(id)arg3 context:(id)arg4;

@end
