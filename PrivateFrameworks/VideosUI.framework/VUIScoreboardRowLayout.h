
@interface VUIScoreboardRowLayout : NSObject {
    int  _backgroundBlendMode;
    UIColor * _backgroundColor;
    int  _separatorBlendMode;
    UIColor * _separatorColor;
}

@property (nonatomic) int backgroundBlendMode;
@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic) int separatorBlendMode;
@property (nonatomic, retain) UIColor *separatorColor;

+ (int)_backgroundColorBlendMode;
+ (id)_backgroundColorForIdiom:(long long)arg1;
+ (id)_bottomLayoutForIdiom:(long long)arg1;
+ (id)_topRowLayoutForIdiom:(long long)arg1;

- (void).cxx_destruct;
- (int)backgroundBlendMode;
- (id)backgroundColor;
- (int)separatorBlendMode;
- (id)separatorColor;
- (void)setBackgroundBlendMode:(int)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setSeparatorBlendMode:(int)arg1;
- (void)setSeparatorColor:(id)arg1;

@end
