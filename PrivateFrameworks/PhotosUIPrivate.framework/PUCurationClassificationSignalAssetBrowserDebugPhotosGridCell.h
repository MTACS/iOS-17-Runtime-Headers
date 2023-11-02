
@interface PUCurationClassificationSignalAssetBrowserDebugPhotosGridCell : PUPhotosGridCell {
    UIColor * _color;
    NSString * _score;
    UILabel * _scoreLabel;
}

@property (nonatomic, copy) UIColor *color;
@property (nonatomic, copy) NSString *score;

- (void).cxx_destruct;
- (id)color;
- (void)layoutSubviews;
- (id)score;
- (void)setColor:(id)arg1;
- (void)setScore:(id)arg1;

@end
