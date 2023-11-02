
@interface VSAppSettingsViewModelResult : NSObject {
    NSArray * _availableAppViewModels;
    NSArray * _nonChannelAppViewModels;
    NSArray * _subscribedAppViewModels;
}

@property (nonatomic, copy) NSArray *availableAppViewModels;
@property (nonatomic, copy) NSArray *nonChannelAppViewModels;
@property (nonatomic, copy) NSArray *subscribedAppViewModels;

- (void).cxx_destruct;
- (id)availableAppViewModels;
- (id)init;
- (id)nonChannelAppViewModels;
- (void)setAvailableAppViewModels:(id)arg1;
- (void)setNonChannelAppViewModels:(id)arg1;
- (void)setSubscribedAppViewModels:(id)arg1;
- (id)subscribedAppViewModels;

@end
