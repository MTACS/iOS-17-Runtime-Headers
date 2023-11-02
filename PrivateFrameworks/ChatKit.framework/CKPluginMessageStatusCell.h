
@interface CKPluginMessageStatusCell : CKTranscriptMultilineLabelCell {
    NSString * _balloonBundleID;
    IMBalloonPluginDataSource * _dataSource;
    UIImageView * _imageView;
    UIView * _previousPluginSnapshot;
}

@property (nonatomic, copy) NSString *balloonBundleID;
@property (nonatomic, retain) IMBalloonPluginDataSource *dataSource;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, retain) UIView *previousPluginSnapshot;

- (void).cxx_destruct;
- (void)_updateBalloonPluginIconImage;
- (id)balloonBundleID;
- (void)configureForChatItem:(id)arg1 context:(id)arg2;
- (id)dataSource;
- (void)dealloc;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviewsForAlignmentContents;
- (void)performInsertion:(id /* block */)arg1;
- (void)prepareForReuse;
- (id)previousPluginSnapshot;
- (void)setBalloonBundleID:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setPreviousPluginSnapshot:(id)arg1;

@end
