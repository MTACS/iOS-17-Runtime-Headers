
@interface MNUserOptionsEngine : NSObject {
    NSString * _navSessionLanguage;
    MNObserverHashTable * _observers;
    MNUserOptions * _options;
}

@property (nonatomic, readonly) NSString *currentVoiceLanguage;
@property (nonatomic, readonly) MNUserOptions *options;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)currentVoiceLanguage;
- (id)init;
- (id)localizedStringForKey:(id)arg1;
- (id)options;
- (void)removeObserver:(id)arg1;
- (void)update:(id)arg1;
- (void)updateNavigationSessionLanguage:(id)arg1;

@end
