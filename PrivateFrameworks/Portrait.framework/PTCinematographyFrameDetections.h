
@interface PTCinematographyFrameDetections : NSObject {
    NSNumber * _baseFocusTrackNumberOverride;
    PTCinematographyDetection * _cachedAutoFocusDetection;
    PTCinematographyDetection * _cachedCustomDetection;
    NSDictionary * _cachedDetectionsByFocusIdentifier;
    NSDictionary * _cachedDetectionsByTrackIdentifier;
    NSArray * _detections;
    NSNumber * _detectorDidRun;
    bool  _didCacheAutoFocusDetection;
    bool  _didCacheCustomDetection;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _presentationTime;
}

@property (readonly) NSArray *allFocusIdentifiers;
@property (readonly) NSArray *allTrackIdentifiers;
@property (readonly) NSArray *allTrackIdentifiersForCinematicChoice;
@property (readonly) PTCinematographyDetection *autoFocusDetection;
@property (retain) NSNumber *baseFocusTrackNumberOverride;
@property (retain) PTCinematographyDetection *cachedAutoFocusDetection;
@property (retain) PTCinematographyDetection *cachedCustomDetection;
@property (readonly) NSDictionary *cachedDetectionsByFocusIdentifier;
@property (readonly) NSDictionary *cachedDetectionsByTrackIdentifier;
@property (readonly) PTCinematographyDetection *customDetection;
@property (readonly) NSArray *detections;
@property (readonly) NSNumber *detectorDidRun;
@property bool didCacheAutoFocusDetection;
@property bool didCacheCustomDetection;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } presentationTime;

+ (id)frameDetections:(id)arg1 detectorDidRun:(id)arg2 presentationTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;

- (void).cxx_destruct;
- (id)_detectionsByFocusIdentifier;
- (id)_detectionsByTrackIdentifier;
- (void)addDetection:(id)arg1;
- (id)allFocusIdentifiers;
- (id)allTrackIdentifiers;
- (id)allTrackIdentifiersForCinematicChoice;
- (id)autoFocusDetection;
- (id)baseFocusTrackNumberOverride;
- (id)bestDetectionForGroupIdentifier:(long long)arg1;
- (id)bestDetectionForGroupIdentifier:(long long)arg1 options:(unsigned long long)arg2;
- (id)cachedAutoFocusDetection;
- (id)cachedCustomDetection;
- (id)cachedDetectionsByFocusIdentifier;
- (id)cachedDetectionsByTrackIdentifier;
- (id)customDetection;
- (id)debugDescription;
- (id)detectionForFocusIdentifier:(id)arg1;
- (id)detectionForTrackIdentifier:(long long)arg1;
- (id)detections;
- (id)detectorDidRun;
- (bool)didCacheAutoFocusDetection;
- (bool)didCacheCustomDetection;
- (void)flushCachedDetectionsDictionaries;
- (id)initWithDetections:(id)arg1 detectorDidRun:(id)arg2 presentationTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })presentationTime;
- (void)setBaseFocusTrackNumberOverride:(id)arg1;
- (void)setCachedAutoFocusDetection:(id)arg1;
- (void)setCachedCustomDetection:(id)arg1;
- (void)setDidCacheAutoFocusDetection:(bool)arg1;
- (void)setDidCacheCustomDetection:(bool)arg1;
- (void)setPresentationTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;

@end
