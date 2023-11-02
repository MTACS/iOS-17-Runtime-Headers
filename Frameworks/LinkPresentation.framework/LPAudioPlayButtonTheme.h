
@interface LPAudioPlayButtonTheme : NSObject {
    UIColor * _keyColor;
    UIColor * _outerBorderColor;
    UIColor * _secondaryColor;
    bool  _useInvertedInactiveState;
}

@property (nonatomic, readonly, retain) UIColor *keyColor;
@property (nonatomic, readonly, retain) UIColor *outerBorderColor;
@property (nonatomic, readonly, retain) UIColor *secondaryColor;
@property (nonatomic, readonly) bool useInvertedInactiveState;

- (void).cxx_destruct;
- (id)initWithKeyColor:(id)arg1 secondaryColor:(id)arg2 outerBorderColor:(id)arg3 useInvertedInactiveState:(bool)arg4;
- (id)keyColor;
- (id)outerBorderColor;
- (id)secondaryColor;
- (bool)useInvertedInactiveState;

@end
