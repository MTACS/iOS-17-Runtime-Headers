
@interface PGGraphBusinessEdge : PGGraphOptimizedEdge {
    double  _confidence;
    bool  _hasRoutineInfo;
    NSDate * _universalEndDate;
    NSDate * _universalStartDate;
}

@property (readonly) double confidence;
@property (nonatomic, readonly) bool hasRoutineInfo;
@property (nonatomic, readonly) NSDate *universalEndDate;
@property (nonatomic, readonly) NSDate *universalStartDate;

- (void).cxx_destruct;
- (void)checkConsistencyOfProperties:(id)arg1 withExtraPropertyKeys:(id)arg2;
- (double)confidence;
- (id)edgeDescription;
- (bool)hasProperties:(id)arg1;
- (bool)hasRoutineInfo;
- (id)initFromSourceNode:(id)arg1 toBusinessNode:(id)arg2 confidence:(double)arg3 hasRoutineInfo:(bool)arg4 universalStartDate:(id)arg5 universalEndDate:(id)arg6;
- (id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 properties:(id)arg5;
- (id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 properties:(id)arg6;
- (id)propertyDictionary;
- (id)universalEndDate;
- (id)universalStartDate;

@end
