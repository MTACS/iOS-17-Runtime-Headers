
@interface MPFeedbackCommand : MPRemoteCommand {
    bool  _active;
    NSString * _localizedShortTitle;
    NSString * _localizedTitle;
    long long  _presentationStyle;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic, copy) NSString *localizedShortTitle;
@property (nonatomic, copy) NSString *localizedTitle;

- (void).cxx_destruct;
- (id)_mediaRemoteCommandInfoOptions;
- (bool)isActive;
- (id)localizedShortTitle;
- (id)localizedTitle;
- (id)newCommandEventWithState:(long long)arg1;
- (long long)presentationStyle;
- (void)setActive:(bool)arg1;
- (void)setLocalizedShortTitle:(id)arg1;
- (void)setLocalizedTitle:(id)arg1;
- (void)setPresentationStyle:(long long)arg1;

@end
