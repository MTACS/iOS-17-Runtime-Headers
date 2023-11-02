
@interface PXStoryPPTResultsAggregate : NSObject {
    NSMutableDictionary * _extraResultsDictionaryRepresentation;
    NSMutableDictionary * _measureInfos;
}

@property (nonatomic, readonly) NSDictionary *extraResultsDictionaryRepresentation;

- (void).cxx_destruct;
- (void)_addExtraResultsValue:(double)arg1 metric:(long long)arg2 forMeasure:(id)arg3 configuration:(id)arg4;
- (id)_keyForMeasure:(id)arg1 configuration:(id)arg2;
- (void)addValue:(double)arg1 metric:(long long)arg2 forMeasure:(id)arg3 configuration:(id)arg4;
- (id)extraResultsDictionaryRepresentation;
- (id)init;

@end
