
@interface ASDAggregateClusterMappingData : PBCodable <NSCopying> {
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _clusterAppCounts;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _clusterIDs;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _clusterVersions;
    int  _encodingVersion;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _weightedAppForgroundUsages;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _weightedAppLaunches;
}

@property (nonatomic, readonly) int*clusterAppCounts;
@property (nonatomic, readonly) unsigned long long clusterAppCountsCount;
@property (nonatomic, readonly) int*clusterIDs;
@property (nonatomic, readonly) unsigned long long clusterIDsCount;
@property (nonatomic, readonly) int*clusterVersions;
@property (nonatomic, readonly) unsigned long long clusterVersionsCount;
@property (nonatomic) int encodingVersion;
@property (nonatomic, readonly) int*weightedAppForgroundUsages;
@property (nonatomic, readonly) unsigned long long weightedAppForgroundUsagesCount;
@property (nonatomic, readonly) int*weightedAppLaunches;
@property (nonatomic, readonly) unsigned long long weightedAppLaunchesCount;

- (void)addClusterAppCount:(int)arg1;
- (void)addClusterID:(int)arg1;
- (void)addClusterVersion:(int)arg1;
- (void)addWeightedAppForgroundUsage:(int)arg1;
- (void)addWeightedAppLaunches:(int)arg1;
- (void)clearClusterAppCounts;
- (void)clearClusterIDs;
- (void)clearClusterVersions;
- (void)clearWeightedAppForgroundUsages;
- (void)clearWeightedAppLaunches;
- (int)clusterAppCountAtIndex:(unsigned long long)arg1;
- (int*)clusterAppCounts;
- (unsigned long long)clusterAppCountsCount;
- (int)clusterIDAtIndex:(unsigned long long)arg1;
- (int*)clusterIDs;
- (unsigned long long)clusterIDsCount;
- (int)clusterVersionAtIndex:(unsigned long long)arg1;
- (int*)clusterVersions;
- (unsigned long long)clusterVersionsCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (int)encodingVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setClusterAppCounts:(int*)arg1 count:(unsigned long long)arg2;
- (void)setClusterIDs:(int*)arg1 count:(unsigned long long)arg2;
- (void)setClusterVersions:(int*)arg1 count:(unsigned long long)arg2;
- (void)setEncodingVersion:(int)arg1;
- (void)setWeightedAppForgroundUsages:(int*)arg1 count:(unsigned long long)arg2;
- (void)setWeightedAppLaunches:(int*)arg1 count:(unsigned long long)arg2;
- (int)weightedAppForgroundUsageAtIndex:(unsigned long long)arg1;
- (int*)weightedAppForgroundUsages;
- (unsigned long long)weightedAppForgroundUsagesCount;
- (int*)weightedAppLaunches;
- (int)weightedAppLaunchesAtIndex:(unsigned long long)arg1;
- (unsigned long long)weightedAppLaunchesCount;
- (void)writeTo:(id)arg1;

@end
