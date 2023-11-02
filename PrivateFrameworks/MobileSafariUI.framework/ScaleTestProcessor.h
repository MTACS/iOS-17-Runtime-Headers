
@interface ScaleTestProcessor : PurplePageLoadTestRunner {
    float  _scale;
}

- (void)doneRendering:(id)arg1;
- (void)setZoomScale:(float)arg1;
- (bool)startPageAction:(id)arg1;

@end
