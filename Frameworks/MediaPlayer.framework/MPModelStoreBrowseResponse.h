
@interface MPModelStoreBrowseResponse : MPModelResponse {
    MPChangeDetails * _changeDetails;
    MPModelStoreBrowseResponseParser * _parser;
}

@property (nonatomic, retain) MPChangeDetails *changeDetails;
@property (nonatomic, readonly) bool hasAdditionalContentItems;
@property (nonatomic, readonly) id nms_cachedLoadedOutput;
@property (nonatomic, retain) MPModelStoreBrowseResponseParser *parser;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

- (void).cxx_destruct;
- (id)changeDetails;
- (bool)hasAdditionalContentItems;
- (id)parser;
- (void)setChangeDetails:(id)arg1;
- (void)setParser:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync

- (id)nms_cachedLoadedOutput;
- (void)nms_setCachedLoadedOutput:(id)arg1;

@end
