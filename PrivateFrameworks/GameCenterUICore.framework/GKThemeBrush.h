
@interface GKThemeBrush : GKBrush {
    GKUITheme * _theme;
}

@property (nonatomic, retain) GKUITheme *theme;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithTheme:(id)arg1;
- (void)setTheme:(id)arg1;
- (id)theme;

@end
