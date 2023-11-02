
@interface FCNewsTabiChannelPickerSuggestionsConfiguration : NSObject {
    FCNewsTabiChannelPickerSuggestionsInputOutputConfiguration * _bundleInputOutputConfiguration;
    FCNewsTabiChannelPickerSuggestionsInputOutputConfiguration * _nonBundleInputOutputConfiguration;
    FCNewsTabiChannelPickerSuggestionsUserContextConfiguration * _userContextConfiguration;
}

@property (nonatomic, retain) FCNewsTabiChannelPickerSuggestionsInputOutputConfiguration *bundleInputOutputConfiguration;
@property (nonatomic, readonly) NSDictionary *dictionary;
@property (nonatomic, retain) FCNewsTabiChannelPickerSuggestionsInputOutputConfiguration *nonBundleInputOutputConfiguration;
@property (nonatomic, retain) FCNewsTabiChannelPickerSuggestionsUserContextConfiguration *userContextConfiguration;

- (void).cxx_destruct;
- (id)bundleInputOutputConfiguration;
- (id)description;
- (id)dictionary;
- (id)init;
- (id)initWithBundleInputOutputConfiguration:(id)arg1 nonBundleInputOutputConfiguration:(id)arg2 userContextConfiguration:(id)arg3;
- (id)initWithDictionary:(id)arg1;
- (id)nonBundleInputOutputConfiguration;
- (void)setBundleInputOutputConfiguration:(id)arg1;
- (void)setNonBundleInputOutputConfiguration:(id)arg1;
- (void)setUserContextConfiguration:(id)arg1;
- (id)userContextConfiguration;

@end
