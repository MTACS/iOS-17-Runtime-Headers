
@interface TSKStretchableBackgroundButton : UIButton {
    long long  mBackgroundLeftCapWidth;
    long long  mBackgroundTopCapHeight;
}

@property (nonatomic) long long backgroundLeftCapWidth;
@property (nonatomic) long long backgroundTopCapHeight;

- (void)awakeFromNib;
- (long long)backgroundLeftCapWidth;
- (long long)backgroundTopCapHeight;
- (void)guessBackgroundTopLeftCapSize;
- (void)p_resetBackgroundImage;
- (void)p_resetBackgroundImageForState:(unsigned long long)arg1;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setBackgroundLeftCapWidth:(long long)arg1;
- (void)setBackgroundTopCapHeight:(long long)arg1;
- (void)setBackgroundTopLeftCapHeight:(long long)arg1 width:(long long)arg2;

@end
