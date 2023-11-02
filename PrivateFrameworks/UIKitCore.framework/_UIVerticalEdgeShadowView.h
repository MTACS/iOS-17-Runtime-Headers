
@interface _UIVerticalEdgeShadowView : _UIShadowView {
    unsigned long long  _edge;
    double  _width;
}

@property (nonatomic, readonly) unsigned long long edge;
@property (nonatomic, readonly) double width;

- (void)_loadImageIfNecessary;
- (unsigned long long)edge;
- (id)initWithWidth:(double)arg1 edge:(unsigned long long)arg2;
- (void)layoutSubviews;
- (double)width;

@end
