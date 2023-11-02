
@interface CNFixedDetectionTrack : CNDetectionTrack

@property (readonly) float focusDisparity;
@property (readonly) CNDetection *originalDetection;

- (id)_internalFixedTrack;
- (float)focusDisparity;
- (id)initWithFocusDisparity:(float)arg1;
- (id)initWithOriginalDetection:(id)arg1;
- (id)originalDetection;

@end
