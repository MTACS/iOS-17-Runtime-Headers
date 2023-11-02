
@interface NMSAudiobookReferenceObject : NSObject {
    NSNumber * _audiobookIdentifier;
    unsigned long long  _downloadLimit;
}

@property (nonatomic, readonly) NSNumber *audiobookIdentifier;
@property (nonatomic) unsigned long long downloadLimit;

- (void).cxx_destruct;
- (id)audiobookIdentifier;
- (id)audiobookMediaItem;
- (id)description;
- (unsigned long long)downloadLimit;
- (id)initWithAudiobookIdentifier:(id)arg1 downloadLimit:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (void)setDownloadLimit:(unsigned long long)arg1;

@end
