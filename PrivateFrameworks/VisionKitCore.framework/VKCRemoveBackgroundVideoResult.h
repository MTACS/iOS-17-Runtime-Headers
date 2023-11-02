
@interface VKCRemoveBackgroundVideoResult : NSObject {
    NSNumber * _animatedStickerScore;
    struct CGSize { 
        double width; 
        double height; 
    }  _canvasSize;
    MADVideoRemoveBackgroundResult * _madResult;
    VKCRemoveBackgroundVideoRequest * _request;
}

@property (nonatomic, retain) NSNumber *animatedStickerScore;
@property (nonatomic) struct CGSize { double x1; double x2; } canvasSize;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, retain) MADVideoRemoveBackgroundResult *madResult;
@property (nonatomic, retain) VKCRemoveBackgroundVideoRequest *request;
@property (nonatomic, readonly) UTType *utType;

- (void).cxx_destruct;
- (id)animatedStickerScore;
- (struct CGSize { double x1; double x2; })canvasSize;
- (id)data;
- (void)generateVideoSizeWithData:(id)arg1;
- (id)initWithMADVideoResult:(id)arg1 request:(id)arg2;
- (id)madResult;
- (id)request;
- (void)setAnimatedStickerScore:(id)arg1;
- (void)setCanvasSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setMadResult:(id)arg1;
- (void)setRequest:(id)arg1;
- (id)utType;

@end
