
@interface EMFDPEmojiUsageRecorder : EMFDPRecorder {
    NSLocale * _locale;
    NSString * _usageModeIdentifier;
}

@property (nonatomic, readonly) NSLocale *locale;
@property (nonatomic, readonly) NSString *usageModeIdentifier;

+ (id)_defaultUsageModeIdentifier;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithEmoji:(id)arg1;
- (id)initWithEmoji:(id)arg1 usageModeIdentifier:(id)arg2;
- (id)locale;
- (id)recordingKey;
- (bool)report;
- (id)usageModeIdentifier;

@end
