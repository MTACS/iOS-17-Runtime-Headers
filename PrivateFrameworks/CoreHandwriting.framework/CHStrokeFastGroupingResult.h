
@interface CHStrokeFastGroupingResult : CHStrokeGroupingResult {
    struct vector<CHFastGroupingCluster, std::allocator<CHFastGroupingCluster>> { 
        struct CHFastGroupingCluster {} *__begin_; 
        struct CHFastGroupingCluster {} *__end_; 
        struct __compressed_pair<CHFastGroupingCluster *, std::allocator<CHFastGroupingCluster>> { 
            struct CHFastGroupingCluster {} *__value_; 
        } __end_cap_; 
    }  _fastGroupingClusters;
}

@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{vector<CHFastGroupingCluster' */ struct  fastGroupingClusters; /* unknown property attribute:  std::allocator<CHFastGroupingCluster>>=^{CHFastGroupingCluster}}} */

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct vector<CHFastGroupingCluster, std::allocator<CHFastGroupingCluster>> { struct CHFastGroupingCluster {} *x1; struct CHFastGroupingCluster {} *x2; struct __compressed_pair<CHFastGroupingCluster *, std::allocator<CHFastGroupingCluster>> { struct CHFastGroupingCluster {} *x_3_1_1; } x3; })fastGroupingClusters;
- (id)initWithFastGroupingClusters:(const void*)arg1 clusteredStrokes:(id)arg2 strokeProvider:(id)arg3 strategyIdentifier:(id)arg4 clutterFilter:(id)arg5;

@end
