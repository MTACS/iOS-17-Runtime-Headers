
@protocol AVContentKeyRecipient

@required

- (bool)mayRequireContentKeysForMediaDataProcessing;

@optional

- (void)contentKeySession:(AVContentKeySession *)arg1 didProvideContentKey:(AVContentKey *)arg2;

@end
