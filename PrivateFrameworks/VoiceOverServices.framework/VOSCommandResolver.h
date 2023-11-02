
@interface VOSCommandResolver : NSObject <NSCopying> {
    unsigned long long  _bsiTypingMode;
    NSNumber * _cachedContext;
    NSNumber * _cachedPressCount;
    id /* block */  _fetchContextBlock;
    id /* block */  _fetchPressCountBlock;
    unsigned long long  _host;
    unsigned long long  _keyboardMode;
    id /* block */  _resolvingEventOccurredBlock;
    VOSScreenreaderMode * _screenreaderMode;
    bool  _shouldApplyRTL;
}

@property (nonatomic) unsigned long long bsiTypingMode;
@property (nonatomic, readonly) unsigned long long context;
@property (nonatomic, copy) id /* block */ fetchContextBlock;
@property (nonatomic, copy) id /* block */ fetchPressCountBlock;
@property (nonatomic) unsigned long long host;
@property (nonatomic, readonly) bool isAppleTV;
@property (nonatomic, readonly) bool isBSIScreenreaderMode;
@property (nonatomic, readonly) bool isDefaultKeyboardMode;
@property (nonatomic, readonly) bool isDefaultScreenreaderMode;
@property (nonatomic, readonly) bool isHandwritingScreenreaderMode;
@property (nonatomic, readonly) bool isHomePod;
@property (nonatomic, readonly) bool isIPad;
@property (nonatomic, readonly) bool isIPhone;
@property (nonatomic, readonly) bool isQuickNavKeyboardMode;
@property (nonatomic, readonly) bool isWatch;
@property (nonatomic) unsigned long long keyboardMode;
@property (nonatomic, readonly) long long pressCount;
@property (nonatomic, copy) id /* block */ resolvingEventOccurredBlock;
@property (nonatomic, retain) VOSScreenreaderMode *screenreaderMode;
@property (nonatomic) bool shouldApplyRTL;

+ (unsigned long long)currentHost;
+ (id)resolverForCurrentHost;

- (void).cxx_destruct;
- (unsigned long long)bsiTypingMode;
- (unsigned long long)context;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id /* block */)fetchContextBlock;
- (id /* block */)fetchPressCountBlock;
- (unsigned long long)host;
- (bool)isAppleTV;
- (bool)isBSIScreenreaderMode;
- (bool)isDefaultKeyboardMode;
- (bool)isDefaultScreenreaderMode;
- (bool)isHandwritingScreenreaderMode;
- (bool)isHomePod;
- (bool)isIPad;
- (bool)isIPhone;
- (bool)isQuickNavKeyboardMode;
- (bool)isWatch;
- (unsigned long long)keyboardMode;
- (long long)pressCount;
- (id)resolverWithScreenreaderModeVariant:(id)arg1;
- (id /* block */)resolvingEventOccurredBlock;
- (id)screenreaderMode;
- (void)setBsiTypingMode:(unsigned long long)arg1;
- (void)setFetchContextBlock:(id /* block */)arg1;
- (void)setFetchPressCountBlock:(id /* block */)arg1;
- (void)setHost:(unsigned long long)arg1;
- (void)setKeyboardMode:(unsigned long long)arg1;
- (void)setResolvingEventOccurredBlock:(id /* block */)arg1;
- (void)setScreenreaderMode:(id)arg1;
- (void)setShouldApplyRTL:(bool)arg1;
- (bool)shouldApplyRTL;

@end
