
@interface WLKSiriBestPlayablesResponse : NSObject {
    NSDictionary * _dictionary;
    NSDictionary * _playablesByID;
}

@property (nonatomic, readonly, copy) NSDictionary *dictionary;
@property (nonatomic, copy) NSDictionary *playablesByID;

- (void).cxx_destruct;
- (id)dictionary;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)playableForStatsID:(id)arg1;
- (id)playablesByID;
- (void)setPlayablesByID:(id)arg1;

@end
