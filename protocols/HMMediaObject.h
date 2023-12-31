
@protocol HMMediaObject <NSObject>

@required

- (<HMMediaObjectDelegate> *)delegate;
- (HMMediaSession *)mediaSession;
- (void)setDelegate:(id <HMMediaObjectDelegate>)arg1;
- (HMAccessorySettings *)settings;

@end
