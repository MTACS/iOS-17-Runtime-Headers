
@interface WLKCanonicalPlayablesSiriResponse : NSObject {
    NSString * _canonicalID;
    unsigned long long  _contentType;
    NSDictionary * _dictionary;
    NSArray * _playables;
    bool  _watchListable;
    bool  _watchListed;
}

@property (nonatomic, copy) NSString *canonicalID;
@property (nonatomic) unsigned long long contentType;
@property (nonatomic, readonly, copy) NSDictionary *dictionary;
@property (nonatomic, retain) NSArray *playables;
@property (getter=isWatchListable, nonatomic) bool watchListable;
@property (getter=isWatchListed, nonatomic) bool watchListed;

+ (id)_parseChannelsFromPayload:(id)arg1;

- (void).cxx_destruct;
- (id)canonicalID;
- (unsigned long long)contentType;
- (id)dictionary;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 statsID:(id)arg2;
- (bool)isWatchListable;
- (bool)isWatchListed;
- (id)playables;
- (void)setCanonicalID:(id)arg1;
- (void)setContentType:(unsigned long long)arg1;
- (void)setPlayables:(id)arg1;
- (void)setWatchListable:(bool)arg1;
- (void)setWatchListed:(bool)arg1;

@end
