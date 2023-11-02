
@interface NMSPodcastsDownloadSettings : NSObject <NSCopying> {
    long long  _collectionType;
    NSMutableDictionary * _dictionary;
}

@property (getter=isEnabled, nonatomic, readonly) bool enabled;
@property (nonatomic) long long numberOfEpisodes;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)init;
- (id)initWithCollectionType:(long long)arg1;
- (id)initWithCollectionType:(long long)arg1 dictionary:(id)arg2;
- (id)initWithCollectionType:(long long)arg1 legacyDownloadSettings:(id)arg2;
- (id)initWithCollectionType:(long long)arg1 legacyDownloadSettingsDictionary:(id)arg2;
- (id)initWithDictionary:(id)arg1;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (long long)numberOfEpisodes;
- (void)setNumberOfEpisodes:(long long)arg1;

@end
