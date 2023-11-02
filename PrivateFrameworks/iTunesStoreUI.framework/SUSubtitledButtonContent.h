
@interface SUSubtitledButtonContent : NSObject {
    NSString * _subtitle;
    UIColor * _subtitleColor;
    UIColor * _subtitleShadowColor;
}

@property (nonatomic, retain) NSString *subtitle;
@property (nonatomic, retain) UIColor *subtitleColor;
@property (nonatomic, retain) UIColor *subtitleShadowColor;

- (void)dealloc;
- (void)setSubtitle:(id)arg1;
- (void)setSubtitleColor:(id)arg1;
- (void)setSubtitleShadowColor:(id)arg1;
- (id)subtitle;
- (id)subtitleColor;
- (id)subtitleShadowColor;

@end
