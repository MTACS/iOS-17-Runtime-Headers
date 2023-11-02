
@interface IMFullScreenEffect : NSObject {
    id  _delegate;
    NSString * _identifier;
    NSArray * _messageFilters;
    unsigned long long  _messageOrientation;
    NSURL * _soundEffectFileURL;
    id  _triggeredByObject;
    bool  _triggeredByResponseKit;
}

@property (nonatomic, readonly) UIColor *backgroundColor;
@property id delegate;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) bool effectIsDark;
@property (nonatomic, readonly) Class effectViewClass;
@property (getter=isForegroundEffect, nonatomic, readonly) bool foregroundEffect;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly) unsigned long long layerCount;
@property (nonatomic, readonly) NSArray *messageFilters;
@property (nonatomic) unsigned long long messageOrientation;
@property (nonatomic, readonly) bool shouldDrawOverNavigationBar;
@property (nonatomic, readonly) NSURL *soundEffectFileURL;
@property (nonatomic, readonly) bool soundEffectHasHapticTrack;
@property (nonatomic) id triggeredByObject;
@property (nonatomic) bool triggeredByResponseKit;

+ (id)_monochromeDimmingFilterWithType:(long long)arg1;
+ (id)bigEmojiFilter;
+ (id)stickerFilter;
+ (id)tapBackFilter;

- (void).cxx_destruct;
- (id)backgroundColor;
- (id)delegate;
- (double)duration;
- (bool)effectIsDark;
- (Class)effectViewClass;
- (id)identifier;
- (bool)isForegroundEffect;
- (unsigned long long)layerCount;
- (id)messageFilters;
- (unsigned long long)messageOrientation;
- (void)prepareSoundEffect;
- (void)setDelegate:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMessageOrientation:(unsigned long long)arg1;
- (void)setTriggeredByObject:(id)arg1;
- (void)setTriggeredByResponseKit:(bool)arg1;
- (bool)shouldDrawOverNavigationBar;
- (id)soundEffectFileURL;
- (bool)soundEffectHasHapticTrack;
- (id)triggeredByObject;
- (bool)triggeredByResponseKit;

@end
