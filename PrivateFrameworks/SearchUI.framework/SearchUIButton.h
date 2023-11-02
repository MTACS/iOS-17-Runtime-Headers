
@interface SearchUIButton : TLKButton {
    unsigned long long  _type;
    bool  _useCompactMode;
}

@property (nonatomic) unsigned long long type;
@property (nonatomic) bool useCompactMode;

- (id)imageNameForToggleState:(bool)arg1;
- (id)initWithType:(unsigned long long)arg1;
- (bool)isPlayButton;
- (void)setFixedSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setType:(unsigned long long)arg1;
- (void)setUseCompactMode:(bool)arg1;
- (unsigned long long)type;
- (void)updateWithType:(unsigned long long)arg1;
- (bool)useCompactMode;

@end
