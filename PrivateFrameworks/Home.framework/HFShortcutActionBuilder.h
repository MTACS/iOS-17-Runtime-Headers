
@interface HFShortcutActionBuilder : HFActionBuilder

+ (Class)homeKitRepresentationClass;

- (id)commitItem;
- (id)containedAccessoryRepresentables;
- (id)createNewAction;
- (bool)isAffectedByEndEvents;
- (id)performValidation;
- (id)validationError;

@end
