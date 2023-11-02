
@interface PXSurveyQuestionMapConfiguration : NSObject <PXSurveyQuestionConfiguration> {
    PXSurveyQuestionConfigurationHandlers * _handlers;
    bool  _isStale;
    CLLocation * _location;
    MKMapView * _mapView;
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
@property (nonatomic, readonly) CLLocation *location;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)contentImageForOneUp;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentRectForOneUp;
- (id)contentView;
- (id)handlers;
- (id)init;
- (id)initWithTitle:(id)arg1 location:(id)arg2;
- (bool)isStale;
- (void)layoutContentViewInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)location;
- (void)setHandlers:(id)arg1;
- (void)setIsStale:(bool)arg1;
- (id)title;

@end
