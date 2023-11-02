
@protocol SXComponentInsertionConditionEngine <NSObject>

@required

- (void)addCondition:(id <SXComponentInsertionCondition>)arg1;
- (void)insertedComponent:(id <SXComponent>)arg1 approximateLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)prepareWithComponents:(NSArray *)arg1 layoutProvider:(id <SXComponentInsertionLayoutProvider>)arg2 DOMObjectProvider:(id <SXDOMObjectProviding>)arg3;
- (bool)validateMarker:(id <SXBlueprintMarker>)arg1 componentTraits:(unsigned long long)arg2 layoutProvider:(id <SXComponentInsertionLayoutProvider>)arg3;

@end
