
@interface FCNewsTabiChannelPickerSuggestionsInputOutputConfiguration : NSObject {
    NSString * _contextFeatureKey;
    NSString * _generalChannelSuggestionsOutputName;
    NSString * _generalChannelSuggestionsScoreOutputName;
    NSString * _newsPlusChannelSuggestionsOutputName;
    NSString * _newsPlusChannelSuggestionsScoreOutputName;
}

@property (nonatomic, retain) NSString *contextFeatureKey;
@property (nonatomic, readonly) NSDictionary *dictionary;
@property (nonatomic, retain) NSString *generalChannelSuggestionsOutputName;
@property (nonatomic, retain) NSString *generalChannelSuggestionsScoreOutputName;
@property (nonatomic, retain) NSString *newsPlusChannelSuggestionsOutputName;
@property (nonatomic, retain) NSString *newsPlusChannelSuggestionsScoreOutputName;

- (void).cxx_destruct;
- (id)contextFeatureKey;
- (id)description;
- (id)dictionary;
- (id)generalChannelSuggestionsOutputName;
- (id)generalChannelSuggestionsScoreOutputName;
- (id)init;
- (id)initWithContextFeatureKey:(id)arg1 generalChannelSuggestionsOutputName:(id)arg2 generalChannelSuggestionsScoreOutputName:(id)arg3 newsPlusChannelSuggestionsOutputName:(id)arg4 newsPlusChannelSuggestionsScoreOutputName:(id)arg5;
- (id)initWithDictionary:(id)arg1;
- (id)newsPlusChannelSuggestionsOutputName;
- (id)newsPlusChannelSuggestionsScoreOutputName;
- (void)setContextFeatureKey:(id)arg1;
- (void)setGeneralChannelSuggestionsOutputName:(id)arg1;
- (void)setGeneralChannelSuggestionsScoreOutputName:(id)arg1;
- (void)setNewsPlusChannelSuggestionsOutputName:(id)arg1;
- (void)setNewsPlusChannelSuggestionsScoreOutputName:(id)arg1;

@end
