
@interface PRImmutableEditingLookProperties : PREditingLookProperties {
    PRTimeFontConfiguration * _timeFontConfiguration;
    PRPosterColor * _titlePosterColor;
}

- (void).cxx_destruct;
- (id)initWithTimeFontConfiguration:(id)arg1 titlePosterColor:(id)arg2;
- (id)timeFontConfiguration;
- (id)titlePosterColor;

@end
