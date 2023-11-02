
@interface VKCaptureTextAnalysisRequest : NSObject <NSCopying, VKFeedbackAssetsProvider> {
    <VKCaptureTextAnalysisRequestDelegate> * _delegate;
    VKQuad * _focusQuad;
    UIImage * _image;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <VKCaptureTextAnalysisRequestDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) VKQuad *focusQuad;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } focusRect;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIImage *image;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegate;
- (id)focusQuad;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })focusRect;
- (id)image;
- (id)initWithImage:(id)arg1 delegate:(id)arg2;
- (id)initWithImage:(id)arg1 focusQuad:(id)arg2 delegate:(id)arg3;
- (id)initWithImage:(id)arg1 focusRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 delegate:(id)arg3;
- (id)requestHandler;
- (bool)saveAssetsToFeedbackAttachmentsFolder:(id)arg1 error:(id*)arg2;

@end
