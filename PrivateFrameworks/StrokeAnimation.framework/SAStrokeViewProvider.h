
@interface SAStrokeViewProvider : NSObject {
    UIView<SAStrokeVisualResponse> * _strokeView;
}

@property (nonatomic, retain) UIView<SAStrokeVisualResponse> *strokeView;

- (void).cxx_destruct;
- (void)setStrokeView:(id)arg1;
- (id)strokeView;
- (id)strokeViewWithDelegate:(id)arg1;

@end
