
@interface PLDataCluster : NSObject <CLSCurationDebugItemCluster> {
    id  _clustroid;
    double  _diameter;
    NSArray * _objects;
    double  _score;
}

@property (readonly) NSArray *clsCurationItems;
@property (nonatomic, retain) id clustroid;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double diameter;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *objects;
@property (nonatomic) double score;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices

+ (id)clusterWithObjects:(id)arg1;
+ (id)clusterWithObjects:(id)arg1 clustroid:(id)arg2 diameter:(double)arg3;

- (void).cxx_destruct;
- (id)approximateRegionWithMaximumRadius:(double)arg1;
- (id)clustroid;
- (id)description;
- (double)diameter;
- (id)init;
- (id)locations;
- (id)meanRegion:(double)arg1;
- (id)meanUniversalDate;
- (id)objects;
- (double)score;
- (void)setClustroid:(id)arg1;
- (void)setDiameter:(double)arg1;
- (void)setObjects:(id)arg1;
- (void)setScore:(double)arg1;
- (id)universalDates;

// Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit

- (id)clsCurationItems;

@end
