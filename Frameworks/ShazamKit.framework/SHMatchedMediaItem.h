
@interface SHMatchedMediaItem : SHMediaItem <NSSecureCoding> {
    SHSyncedLyrics * _syncedLyrics;
}

@property (nonatomic, readonly) NSArray *adjustedTimeRanges;
@property (nonatomic, readonly) NSDate *audioStartDate;
@property (nonatomic, readonly) float frequencySkew;
@property (nonatomic, readonly) double matchOffset;
@property (nonatomic, readonly) long long matchScore;
@property (nonatomic, readonly) double predictedCurrentMatchOffset;
@property (nonatomic, readonly) NSArray *signatureAlignments;
@property (nonatomic, readonly) float speedSkew;
@property (nonatomic, readonly) SHSyncedLyrics *syncedLyrics;
@property (nonatomic, readonly, copy) NSString *syncedLyricsSnippet;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)adjustedTimeRanges;
- (id)audioStartDate;
- (long long)compare:(id)arg1;
- (id)creationDate;
- (void)encodeWithCoder:(id)arg1;
- (float)frequencySkew;
- (id)initWithCoder:(id)arg1;
- (id)initWithMatchedMediaItemDictionary:(id)arg1;
- (id)initWithMatchedMediaItemDictionary:(id)arg1 syncedLyrics:(id)arg2;
- (id)initWithProperties:(id)arg1;
- (double)matchOffset;
- (long long)matchScore;
- (double)predictedCurrentMatchOffset;
- (id)signatureAlignments;
- (float)speedSkew;
- (id)syncedLyrics;
- (id)syncedLyricsSnippet;

@end
