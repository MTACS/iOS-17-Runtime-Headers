
@interface QLMovieEdits : NSObject {
    unsigned long long  _rightRotationsCount;
    double  _trimEndTime;
    double  _trimStartTime;
}

@property (nonatomic) unsigned long long rightRotationsCount;
@property (nonatomic) double trimEndTime;
@property (nonatomic) double trimStartTime;

+ (id)editsWithRightRotationsCount:(unsigned long long)arg1 trimStartTime:(double)arg2 trimEndTime:(double)arg3;

- (bool)hasEdits;
- (void)incrementRightRotationsCount;
- (id)init;
- (bool)isEqual:(id)arg1;
- (void)resetEditingValues;
- (void)resetTrimmingValues;
- (unsigned long long)rightRotationsCount;
- (bool)rotated;
- (void)setRightRotationsCount:(unsigned long long)arg1;
- (void)setTrimEndTime:(double)arg1;
- (void)setTrimStartTime:(double)arg1;
- (double)trimEndTime;
- (double)trimStartTime;
- (bool)trimmed;

@end
