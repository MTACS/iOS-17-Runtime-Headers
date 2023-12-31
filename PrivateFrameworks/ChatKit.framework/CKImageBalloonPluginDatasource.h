
@interface CKImageBalloonPluginDatasource : IMBalloonPluginDataSource {
    CKBalloonView * _balloonView;
    CKMediaObject * _mediaObject;
}

@property (nonatomic, retain) CKBalloonView *balloonView;
@property (nonatomic, retain) CKMediaObject *mediaObject;

- (void).cxx_destruct;
- (id)balloonView;
- (id)imageBalloon;
- (id)initWithPluginPayload:(id)arg1;
- (id)mediaObject;
- (void)previewDidChange:(id)arg1;
- (void)setBalloonView:(id)arg1;
- (void)setMediaObject:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
