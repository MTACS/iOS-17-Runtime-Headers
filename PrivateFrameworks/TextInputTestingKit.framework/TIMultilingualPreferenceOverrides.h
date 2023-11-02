
@interface TIMultilingualPreferenceOverrides : NSObject <TIMultilingualPreferenceProviding> {
    TIInputMode * _preferredSecondaryInputMode;
    NSArray * _userEnabledInputModes;
    NSArray * _userPreferredLanguages;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) TIInputMode *preferredSecondaryInputMode;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *userEnabledInputModes;
@property (nonatomic, readonly) NSArray *userPreferredLanguages;

- (void).cxx_destruct;
- (id)initWithPreferredSecondaryInputMode:(id)arg1 userEnabledInputModes:(id)arg2 userPreferredLanguages:(id)arg3;
- (id)preferredSecondaryInputMode;
- (id)userEnabledInputModes;
- (id)userPreferredLanguages;

@end
