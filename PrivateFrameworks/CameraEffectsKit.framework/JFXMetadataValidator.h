
@interface JFXMetadataValidator : NSObject {
    long long  _faceDataDetectedFacesCount;
    unsigned long long  _lastARFrameHasFaceAnchors;
    unsigned long long  _lastARFrameIsFaceTracked;
}

@property (nonatomic) long long faceDataDetectedFacesCount;
@property (nonatomic) unsigned long long lastARFrameHasFaceAnchors;
@property (nonatomic) unsigned long long lastARFrameIsFaceTracked;

- (long long)faceDataDetectedFacesCount;
- (id)init;
- (unsigned long long)lastARFrameHasFaceAnchors;
- (unsigned long long)lastARFrameIsFaceTracked;
- (void)reset;
- (void)setFaceDataDetectedFacesCount:(long long)arg1;
- (void)setLastARFrameHasFaceAnchors:(unsigned long long)arg1;
- (void)setLastARFrameIsFaceTracked:(unsigned long long)arg1;
- (void)validateARImageData:(id)arg1;
- (void)validateFaceTrackedARFrame:(id)arg1;

@end
