
@interface WLKContentPlayResponse : NSObject {
    NSDictionary * _dictionary;
    WLKPlayable * _playable;
}

@property (nonatomic, readonly, copy) NSDictionary *dictionary;
@property (nonatomic, readonly) WLKPlayable *playable;

- (void).cxx_destruct;
- (id)dictionary;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)playable;

@end
