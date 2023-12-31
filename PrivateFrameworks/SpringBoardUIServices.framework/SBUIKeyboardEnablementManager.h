
@interface SBUIKeyboardEnablementManager : NSObject {
    bool  _disabled;
    NSHashTable * _disabledContexts;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)description;
- (void)disableAutomaticAppearanceForContext:(id)arg1;
- (void)enableAutomaticAppearanceForContext:(id)arg1;
- (id)init;

@end
