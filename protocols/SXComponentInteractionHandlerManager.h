
@protocol SXComponentInteractionHandlerManager <NSObject>

@required

- (void)addInteractionHandler:(id <SXComponentInteractionHandler>)arg1 componentView:(SXComponentView *)arg2 types:(unsigned long long)arg3;
- (SXComponentView *)componentViewForLocation:(struct CGPoint { double x1; double x2; })arg1;
- (NSArray *)interactionsForComponentView:(SXComponentView *)arg1;
- (NSArray *)interactionsForComponentView:(SXComponentView *)arg1 type:(unsigned long long)arg2;
- (void)removeInteractionHandler:(id <SXComponentInteractionHandler>)arg1 componentView:(SXComponentView *)arg2;

@end
