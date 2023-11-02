
@interface UIKBRenderingContext : NSObject <NSCopying> {
    long long  _handBias;
    bool  _isFloating;
    long long  _keyboardType;
    UIKBRenderConfig * _renderConfig;
    unsigned long long  _shiftState;
}

@property (nonatomic) long long handBias;
@property (nonatomic) bool isFloating;
@property (nonatomic) long long keyboardType;
@property (nonatomic, retain) UIKBRenderConfig *renderConfig;
@property (nonatomic) unsigned long long shiftState;

+ (id)renderingContextForRenderConfig:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)handBias;
- (id)initWithRenderConfig:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isFloating;
- (long long)keyboardType;
- (id)renderConfig;
- (void)setHandBias:(long long)arg1;
- (void)setIsFloating:(bool)arg1;
- (void)setKeyboardType:(long long)arg1;
- (void)setRenderConfig:(id)arg1;
- (void)setShiftState:(unsigned long long)arg1;
- (unsigned long long)shiftState;

@end
