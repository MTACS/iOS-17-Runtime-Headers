
@interface CNCustomDetectionTrack : CNDetectionTrack

@property (readonly) NSArray *allDetections;

- (bool)_integrityCheck;
- (id)_internalCustomTrack;
- (id)allDetections;
- (id)initWithDetections:(id)arg1 smooth:(bool)arg2;

@end
