
@protocol SXComponentViewEngine <NSObject>

@required

- (void)addFactory:(id <SXComponentViewFactory>)arg1;
- (SXComponentView *)componentViewForComponent:(id <SXComponent>)arg1;
- (void)removeFactory:(id <SXComponentViewFactory>)arg1;

@end
