
@interface RCWaveform : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    unsigned long long  _decodedVersion;
    NSArray * _segments;
}

@property (nonatomic, readonly) unsigned long long averagePowerLevelsRate;
@property (readonly) unsigned long long segmentCount;
@property (retain) NSArray *segments;
@property (readonly) NSArray *segmentsCopy;
@property (nonatomic, readonly) struct { double x1; double x2; } timeRange;

+ (void)_mergeBoundarySegmentsInArray:(id)arg1;
+ (id)_mutableSegmentsByClippingToTimeRange:(struct { double x1; double x2; })arg1 withSegments:(id)arg2;
+ (id)_mutableSegmentsIntersectingTimeRange:(struct { double x1; double x2; })arg1 intersectionRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2 withSegments:(id)arg3;
+ (void)initialize;
+ (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfSegmentsIntersectingTimeRange:(struct { double x1; double x2; })arg1 withSegments:(id)arg2;
+ (bool)supportsSecureCoding;
+ (id)waveformURLForAVURL:(id)arg1;
+ (id)waveformWithContentsOfURL:(id)arg1 minimumRequiredVersion:(unsigned long long)arg2;

- (void).cxx_destruct;
- (bool)_isWaveformDataEqualToDataInWaveform:(id)arg1 useAlmostEqual:(bool)arg2;
- (unsigned long long)averagePowerLevelsRate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasUniformPowerLevel:(float)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSegments:(id)arg1;
- (bool)isWaveformDataAlmostEqualToDataInWaveform:(id)arg1;
- (bool)isWaveformDataEqualToDataInWaveform:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (bool)saveContentsToURL:(id)arg1;
- (unsigned long long)segmentCount;
- (id)segments;
- (id)segmentsByClippingToTimeRange:(struct { double x1; double x2; })arg1;
- (id)segmentsCopy;
- (id)segmentsIntersectingTimeRange:(struct { double x1; double x2; })arg1;
- (void)setSegments:(id)arg1;
- (struct { double x1; double x2; })timeRange;

@end
