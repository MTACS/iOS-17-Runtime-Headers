
@interface FTCinematicTrack : NSObject <NSSecureCoding> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _box;
    float  _boxConfidence;
    float  _detectionConfidence;
    long long  _identifier;
    bool  _isHighPriority;
    bool  _isTapSpawned;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastDetectionTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastTappedTime;
    NSDictionary * _metadata;
    unsigned long long  _objectKind;
    unsigned long long  _sourceObservationId;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } box;
@property (nonatomic) float boxConfidence;
@property (nonatomic) float detectionConfidence;
@property (nonatomic) long long identifier;
@property (nonatomic) bool isHighPriority;
@property (nonatomic) bool isTapSpawned;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } lastDetectionTime;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } lastTappedTime;
@property (nonatomic, retain) NSDictionary *metadata;
@property (nonatomic) unsigned long long objectKind;
@property unsigned long long sourceObservationId;

+ (id)fromTrack:(struct shared_ptr<ft::Track> { struct Track {} *x1; struct __shared_weak_count {} *x2; })arg1 isHighPriority:(bool)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })box;
- (float)boxConfidence;
- (float)detectionConfidence;
- (void)encodeWithCoder:(id)arg1;
- (long long)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isHighPriority;
- (bool)isTapSpawned;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })lastDetectionTime;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })lastTappedTime;
- (id)metadata;
- (unsigned long long)objectKind;
- (void)setBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setBoxConfidence:(float)arg1;
- (void)setDetectionConfidence:(float)arg1;
- (void)setIdentifier:(long long)arg1;
- (void)setIsHighPriority:(bool)arg1;
- (void)setIsTapSpawned:(bool)arg1;
- (void)setLastDetectionTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setLastTappedTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMetadata:(id)arg1;
- (void)setObjectKind:(unsigned long long)arg1;
- (void)setSourceObservationId:(unsigned long long)arg1;
- (unsigned long long)sourceObservationId;

@end
