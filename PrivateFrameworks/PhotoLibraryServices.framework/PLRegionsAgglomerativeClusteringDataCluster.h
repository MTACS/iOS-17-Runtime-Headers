
@interface PLRegionsAgglomerativeClusteringDataCluster : NSObject {
    double  _latitude;
    double  _longitude;
    double  _radius;
    double  _score;
    NSArray * _vectors;
}

@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) double radius;
@property (nonatomic) double score;
@property (readonly) NSArray *vectors;

+ (id)dataClusterWithDataVector:(id)arg1;
+ (id)mergedClusterFrom:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDataVector:(id)arg1;
- (double)latitude;
- (double)longitude;
- (double)radius;
- (double)score;
- (void)setLatitude:(double)arg1;
- (void)setLongitude:(double)arg1;
- (void)setRadius:(double)arg1;
- (void)setScore:(double)arg1;
- (id)vectors;

@end
