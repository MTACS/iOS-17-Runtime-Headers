
@interface LPiTunesMediaOffer : NSObject {
    bool  _hasAudio;
    bool  _hasVideo;
    NSURL * _previewURL;
    NSString * _type;
}

@property (nonatomic, readonly) bool hasAudio;
@property (nonatomic, readonly) bool hasVideo;
@property (nonatomic, readonly, copy) NSURL *previewURL;
@property (nonatomic, readonly, copy) NSString *type;

+ (bool)hasAudioForOffer:(id)arg1;
+ (bool)hasVideoForOffer:(id)arg1;
+ (id)previewURLForOffer:(id)arg1;
+ (id)typeForOffer:(id)arg1;

- (void).cxx_destruct;
- (bool)hasAudio;
- (bool)hasVideo;
- (id)initWithDictionary:(id)arg1;
- (id)previewURL;
- (id)type;

@end
