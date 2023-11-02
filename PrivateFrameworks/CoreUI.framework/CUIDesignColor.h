
@interface CUIDesignColor : NSObject {
    int  _blendMode;
    struct CGColor { } * _cgColor;
    long long  _displayGamut;
}

@property (nonatomic, readonly) int blendMode;
@property (nonatomic, readonly) struct CGColor { }*cgColor;
@property (nonatomic, readonly) long long displayGamut;

- (int)blendMode;
- (struct CGColor { }*)cgColor;
- (void)dealloc;
- (long long)displayGamut;
- (id)initWithColor:(struct CGColor { }*)arg1 blendMode:(int)arg2 displayGamut:(long long)arg3;

@end
