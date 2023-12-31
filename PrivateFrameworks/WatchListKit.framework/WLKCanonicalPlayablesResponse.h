
@interface WLKCanonicalPlayablesResponse : NSObject {
    NSString * _canonicalID;
    unsigned long long  _contentType;
    NSDictionary * _dictionary;
    NSArray * _playables;
    bool  _watchListable;
    bool  _watchListed;
}

@property (nonatomic, readonly, copy) NSString *canonicalID;
@property (nonatomic, readonly) unsigned long long contentType;
@property (nonatomic, readonly, copy) NSDictionary *dictionary;
@property (nonatomic, readonly) NSArray *playables;
@property (getter=isWatchListable, nonatomic, readonly) bool watchListable;
@property (getter=isWatchListed, nonatomic, readonly) bool watchListed;

+ (id)_parseChannelsFromPayload:(id)arg1;

- (void).cxx_destruct;
- (id)canonicalID;
- (unsigned long long)contentType;
- (id)dictionary;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithSiriResponse:(id)arg1 statsID:(id)arg2;
- (bool)isWatchListable;
- (bool)isWatchListed;
- (id)playables;

@end
