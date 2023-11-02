
@interface _WGCarouselCellResizeContext : NSObject {
    bool  _active;
    double  _compactHeight;
    double  _expandedHeight;
    UIViewFloatAnimatableProperty * _resizeProgress;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic) double compactHeight;
@property (nonatomic) double expandedHeight;
@property (nonatomic, retain) UIViewFloatAnimatableProperty *resizeProgress;

- (void).cxx_destruct;
- (double)compactHeight;
- (double)expandedHeight;
- (bool)isActive;
- (id)resizeProgress;
- (void)setActive:(bool)arg1;
- (void)setCompactHeight:(double)arg1;
- (void)setExpandedHeight:(double)arg1;
- (void)setResizeProgress:(id)arg1;

@end
