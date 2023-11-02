
@interface CHFastStrokeGroupingStrategy : CHStrokeGroupingStrategy {
    CHStrokeClutterFilter * _clutterFilter;
    NSArray * _locales;
}

- (void).cxx_destruct;
- (struct vector<CHFastGroupingCluster, std::allocator<CHFastGroupingCluster>> { struct CHFastGroupingCluster {} *x1; struct CHFastGroupingCluster {} *x2; struct __compressed_pair<CHFastGroupingCluster *, std::allocator<CHFastGroupingCluster>> { struct CHFastGroupingCluster {} *x_3_1_1; } x3; })clustersForStrokes:(id)arg1 shouldMakeSingleCluster:(bool)arg2;
- (id)fastGroupingResultWithFastGroupingClusters:(void*)arg1 clusteredStrokes:(id)arg2;
- (id)groupingResultForContextStrokes:(id)arg1 clusteredStrokes:(id)arg2 fastGroupingResult:(id)arg3 point:(struct CGPoint { double x1; double x2; })arg4 tokenizationLevel:(long long)arg5;
- (id)groupingResultUsingStrokes:(id)arg1 distanceMetric:(int)arg2 mergingDistanceThreshold:(double)arg3 shouldCancel:(id /* block */)arg4;
- (id)initWithStrokeProvider:(id)arg1 locales:(id)arg2 clutterFilter:(id)arg3;
- (id)lineGroupingResultUsingStrokes:(id)arg1 shouldCancel:(id /* block */)arg2;
- (id)strategyIdentifier;

@end
