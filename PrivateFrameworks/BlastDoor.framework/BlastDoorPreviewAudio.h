
@interface BlastDoorPreviewAudio : NSObject {
    void previewAudio;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) NSArray *powerLevels;

- (void).cxx_destruct;
- (id)description;
- (double)duration;
- (id)init;
- (id)powerLevels;

@end
