
@interface PXSurveyQuestionMemoryConfiguration : NSObject <PXMemoryViewPresentationDelegate, PXSurveyQuestionConfiguration> {
    NSString * _customKeyAssetIdentifier;
    PXSurveyQuestionConfigurationHandlers * _handlers;
    bool  _isStale;
    PHMemory * _memory;
    PXMemoryView * _memoryView;
    PHPhotoLibrary * _photoLibrary;
    NSString * _songAdamId;
    NSString * _title;
}

@property (nonatomic, readonly) UIImage *contentImageForOneUp;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentRectForOneUp;
@property (nonatomic, readonly) UIView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PXSurveyQuestionConfigurationHandlers *handlers;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isStale;
@property (nonatomic, readonly) PHMemory *memory;
@property (nonatomic, readonly) NSString *songAdamId;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)contentImageForOneUp;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentRectForOneUp;
- (id)contentView;
- (id)handlers;
- (id)init;
- (id)initWithTitle:(id)arg1 memory:(id)arg2 songAdamId:(id)arg3 customKeyAssetIdentifier:(id)arg4;
- (bool)isStale;
- (void)layoutContentViewInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)memory;
- (bool)needsQuestionInvalidationForChange:(id)arg1;
- (void)presentDetailsForMemoryView:(id)arg1;
- (void)setHandlers:(id)arg1;
- (void)setIsStale:(bool)arg1;
- (id)songAdamId;
- (id)title;

@end
