
@interface SMCatalogWorkout : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  workout;
}

@property (nonatomic, readonly) NSSet *artwork;
@property (nonatomic, readonly) NSDateComponents *dateReleased;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) bool isGuidedRun;
@property (nonatomic, readonly) bool isGuidedVideo;
@property (nonatomic, readonly) bool isGuidedWalk;
@property (nonatomic, readonly) NSString *location;
@property (nonatomic, readonly) NSSet *mediaMoments;
@property (nonatomic, readonly) NSNumber *mediaTypeRawValue;
@property (nonatomic, readonly) NSString *musicPlaylistIdentifier;
@property (nonatomic, readonly) NSURL *musicPlaylistURL;
@property (nonatomic, readonly) NSArray *musicTracks;
@property (nonatomic, readonly) SMContributor *narrator;
@property (nonatomic, readonly) NSURL *streamingURL;
@property (nonatomic, readonly) NSString *summary;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)artwork;
- (id)dateReleased;
- (double)duration;
- (id)identifier;
- (id)init;
- (bool)isGuidedRun;
- (bool)isGuidedVideo;
- (bool)isGuidedWalk;
- (id)location;
- (id)mediaMoments;
- (id)mediaTypeRawValue;
- (id)musicPlaylistIdentifier;
- (id)musicPlaylistURL;
- (id)musicTracks;
- (id)narrator;
- (id)streamingURL;
- (id)summary;
- (id)title;

@end
