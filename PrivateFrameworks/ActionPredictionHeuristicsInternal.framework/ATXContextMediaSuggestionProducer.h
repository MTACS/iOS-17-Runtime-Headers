
@interface ATXContextMediaSuggestionProducer : NSObject {
    long long  _albumAdamId;
    NSString * _albumName;
    long long  _artistAdamId;
    NSString * _artistName;
    NSString * _destDisplayName;
    NSDate * _expirationDate;
    long long  _mediaSubType;
    long long  _mediaType;
    NSString * _searchString;
    long long  _trackAdamId;
    NSString * _trackName;
}

+ (id)new;

- (void).cxx_destruct;
- (id)init;
- (id)initWithMediaRemoteContentItem:(id)arg1 destDisplayName:(id)arg2 expirationDate:(id)arg3;
- (id)suggestionForAlbumWithReason:(unsigned long long)arg1 score:(double)arg2;
- (id)suggestionForArtistWithReason:(unsigned long long)arg1 score:(double)arg2;
- (id)suggestionForTrackWithReason:(unsigned long long)arg1 score:(double)arg2;

@end
