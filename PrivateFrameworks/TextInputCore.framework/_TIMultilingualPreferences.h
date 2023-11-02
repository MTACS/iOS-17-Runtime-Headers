
@interface _TIMultilingualPreferences : NSObject <TIMultilingualPreferenceProviding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) TIInputMode *preferredSecondaryInputMode;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *userEnabledInputModes;
@property (nonatomic, readonly) NSArray *userPreferredLanguages;

+ (id)inputModesForIdentifiers:(id)arg1;

- (id)preferredSecondaryInputMode;
- (id)userEnabledInputModes;
- (id)userPreferredLanguages;

@end
