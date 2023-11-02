
@protocol HUAvailableRelatedTriggerItemModuleContextProviding <NSObject>

@required

- (NSString *)analyticsPresentationContext;
- (bool)commitsAutomatically;
- (NSNumber *)defaultActiveValue;
- (unsigned long long)engineOptions;
- (unsigned long long)errorHandlingStrategy;
- (bool)hidesAddAutomationItem;
- (bool)hidesCustomTriggers;
- (bool)itemsAreEditable;
- (void)setErrorHandlingStrategy:(unsigned long long)arg1;
- (bool)showNaturalLightingItem;
- (bool)showsIcons;

@end
