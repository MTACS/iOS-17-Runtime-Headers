
@interface SXComponentInsertionConditionEngine : NSObject <SXComponentInsertionConditionEngine> {
    NSMutableSet * _conditions;
}

@property (nonatomic, readonly) NSMutableSet *conditions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addCondition:(id)arg1;
- (id)conditions;
- (id)init;
- (void)insertedComponent:(id)arg1 approximateLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)prepareWithComponents:(id)arg1 layoutProvider:(id)arg2 DOMObjectProvider:(id)arg3;
- (bool)validateMarker:(id)arg1 componentTraits:(unsigned long long)arg2 layoutProvider:(id)arg3;

@end
