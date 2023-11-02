
@interface PTCinematographyFrameDetectionSmoother : NSObject {
    bool  _didCacheIsNextFrameAvailable;
    bool  _didEndFrames;
    NSMutableDictionary * _firstFocusSmootherByTrackNumber;
    NSMutableArray * _frames;
    bool  _isNextFrameAvailableCache;
    PTCinematographyDetection * _lastKnownFocusDetection;
}

@property bool didCacheIsNextFrameAvailable;
@property bool didEndFrames;
@property (retain) NSMutableDictionary *firstFocusSmootherByTrackNumber;
@property (retain) NSMutableArray *frames;
@property (readonly) bool isNextFrameAtEnd;
@property (readonly) bool isNextFrameAvailable;
@property bool isNextFrameAvailableCache;
@property (retain) PTCinematographyDetection *lastKnownFocusDetection;

- (void).cxx_destruct;
- (id)_activeTrackNumbers;
- (bool)_computeIsNextFrameAvailable;
- (void)_dropAllFocusSmoothersIfLeaked;
- (void)_endFocusSmoothersForTrackNumbers:(id)arg1;
- (id)_focusSmootherForAppendingWithTrackIdentifier:(long long)arg1;
- (id)_focusSmootherForReadingWithTrackIdentifier:(long long)arg1;
- (void)_invalidateIsNextFrameAvailableCache;
- (id)_newFocusSmoother;
- (void)_reinit;
- (void)_skipToNextFocusSmootherWithTrackIdentifier:(long long)arg1;
- (void)_updateFocusDetectionForFrame:(id)arg1;
- (void)addFrame:(id)arg1;
- (bool)didCacheIsNextFrameAvailable;
- (bool)didEndFrames;
- (void)endFrames;
- (id)firstFocusSmootherByTrackNumber;
- (id)frames;
- (id)init;
- (bool)isNextFrameAtEnd;
- (bool)isNextFrameAvailable;
- (bool)isNextFrameAvailableCache;
- (id)lastKnownFocusDetection;
- (id)nextFrame;
- (void)setDidCacheIsNextFrameAvailable:(bool)arg1;
- (void)setDidEndFrames:(bool)arg1;
- (void)setFirstFocusSmootherByTrackNumber:(id)arg1;
- (void)setFrames:(id)arg1;
- (void)setIsNextFrameAvailableCache:(bool)arg1;
- (void)setLastKnownFocusDetection:(id)arg1;

@end
