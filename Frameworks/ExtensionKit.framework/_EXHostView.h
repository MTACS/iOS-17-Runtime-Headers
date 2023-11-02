
@interface _EXHostView : UIView {
    UIView * _embededView;
    float  _horizontalContentCompressionResistancePriority;
    float  _verticalContentCompressionResistancePriority;
}

@property (retain) UIView *embededView;
@property float horizontalContentCompressionResistancePriority;
@property float verticalContentCompressionResistancePriority;

- (void).cxx_destruct;
- (void)embedView:(id)arg1;
- (id)embededView;
- (float)horizontalContentCompressionResistancePriority;
- (void)setContentCompressionResistancePriority:(float)arg1 forAxis:(long long)arg2;
- (void)setEmbededView:(id)arg1;
- (void)setHorizontalContentCompressionResistancePriority:(float)arg1;
- (void)setVerticalContentCompressionResistancePriority:(float)arg1;
- (float)verticalContentCompressionResistancePriority;

@end
