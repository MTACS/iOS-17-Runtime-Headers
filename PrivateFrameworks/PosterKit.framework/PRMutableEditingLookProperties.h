
@interface PRMutableEditingLookProperties : PREditingLookProperties {
    PRTimeFontConfiguration * _timeFontConfiguration;
    PRPosterColor * _titlePosterColor;
}

@property (nonatomic, copy) PRTimeFontConfiguration *timeFontConfiguration;
@property (nonatomic, copy) PRPosterColor *titlePosterColor;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithTimeFontConfiguration:(id)arg1 titlePosterColor:(id)arg2;
- (void)setTimeFontConfiguration:(id)arg1;
- (void)setTitlePosterColor:(id)arg1;
- (id)timeFontConfiguration;
- (id)titlePosterColor;

@end
