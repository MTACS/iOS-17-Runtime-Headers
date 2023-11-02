
@interface UPQuiltConfiguration : NSObject {
    UIBezierPath * _bottomLeftQuiltAsleepPath;
    UIBezierPath * _bottomLeftQuiltAwakeLockedPath;
    UIBezierPath * _bottomLeftQuiltUnlockedPath;
    UIBezierPath * _bottomRightQuiltAwakeLockedPath;
    UIBezierPath * _bottomRightQuiltUnlockedPath;
    UPQuiltConfiguration * _fromInterpolatedConfiguration;
    UIBezierPath * _intersectionPieceAwakeLockedPath;
    bool  _isSnapshotConfiguration;
    double  _lineVariance;
    unsigned long long  _randomizationSeedValue;
    UPSeededRandomizer * _randomizer;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _timeBounds;
    UPQuiltConfiguration * _toInterpolatedConfiguration;
    UIBezierPath * _topQuiltAsleepPath;
    UIBezierPath * _topQuiltAwakeLockedPath;
    UIBezierPath * _topQuiltUnlockedPath;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _viewport;
}

@property (nonatomic, retain) UIBezierPath *bottomLeftQuiltAsleepPath;
@property (nonatomic, retain) UIBezierPath *bottomLeftQuiltAwakeLockedPath;
@property (nonatomic, retain) UIBezierPath *bottomLeftQuiltUnlockedPath;
@property (nonatomic, retain) UIBezierPath *bottomRightQuiltAwakeLockedPath;
@property (nonatomic, retain) UIBezierPath *bottomRightQuiltUnlockedPath;
@property (nonatomic, retain) UIBezierPath *intersectionPieceAwakeLockedPath;
@property (nonatomic, readonly) bool isSnapshotConfiguration;
@property (nonatomic, readonly) double lineVariance;
@property (nonatomic, readonly) unsigned long long randomizationSeedValue;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } timeBounds;
@property (nonatomic, retain) UIBezierPath *topQuiltAsleepPath;
@property (nonatomic, retain) UIBezierPath *topQuiltAwakeLockedPath;
@property (nonatomic, retain) UIBezierPath *topQuiltUnlockedPath;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } viewport;

- (void).cxx_destruct;
- (id)bottomLeftQuiltAsleepPath;
- (id)bottomLeftQuiltAwakeLockedPath;
- (id)bottomLeftQuiltUnlockedPath;
- (id)bottomRightQuiltAwakeLockedPath;
- (id)bottomRightQuiltUnlockedPath;
- (id)initWithRandomizationSeedValue:(unsigned long long)arg1 viewport:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 timeBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 lineVariance:(double)arg4;
- (id)intersectionPieceAwakeLockedPath;
- (bool)isSnapshotConfiguration;
- (double)lineVariance;
- (unsigned long long)randomizationSeedValue;
- (void)setBottomLeftQuiltAsleepPath:(id)arg1;
- (void)setBottomLeftQuiltAwakeLockedPath:(id)arg1;
- (void)setBottomLeftQuiltUnlockedPath:(id)arg1;
- (void)setBottomRightQuiltAwakeLockedPath:(id)arg1;
- (void)setBottomRightQuiltUnlockedPath:(id)arg1;
- (void)setIntersectionPieceAwakeLockedPath:(id)arg1;
- (void)setTopQuiltAsleepPath:(id)arg1;
- (void)setTopQuiltAwakeLockedPath:(id)arg1;
- (void)setTopQuiltUnlockedPath:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })timeBounds;
- (id)topQuiltAsleepPath;
- (id)topQuiltAwakeLockedPath;
- (id)topQuiltUnlockedPath;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })viewport;

@end
