
@interface PGGraphPublicEventBusinessEdge : PGGraphBusinessEdge

+ (id)filter;

- (unsigned short)domain;
- (id)initFromPublicEventNode:(id)arg1 toBusinessNode:(id)arg2 confidence:(double)arg3 hasRoutineInfo:(bool)arg4 universalStartDate:(id)arg5 universalEndDate:(id)arg6;
- (id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 properties:(id)arg5;
- (id)label;

@end
