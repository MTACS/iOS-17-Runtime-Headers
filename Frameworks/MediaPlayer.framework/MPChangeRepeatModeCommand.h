
@interface MPChangeRepeatModeCommand : MPRemoteCommand {
    long long  _currentRepeatType;
    NSArray * _supportedRepeatTypes;
}

@property (nonatomic) long long currentRepeatType;

- (void).cxx_destruct;
- (id)_mediaRemoteCommandInfoOptions;
- (long long)currentRepeatType;
- (id)newCommandEventWithType:(long long)arg1;
- (id)newCommandEventWithType:(long long)arg1 preservesRepeatMode:(bool)arg2;
- (void)setCurrentRepeatType:(long long)arg1;
- (void)setSupportedRepeatTypes:(id)arg1;

@end
