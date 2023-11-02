
@interface GKMatchedPlayers : NSObject {
    NSArray * _players;
    NSDictionary * _playersProperties;
    NSDictionary * _properties;
}

@property (nonatomic, readonly) NSArray *players;
@property (nonatomic, readonly) NSDictionary *playersProperties;
@property (nonatomic, readonly) NSDictionary *properties;

- (void).cxx_destruct;
- (id)description;
- (id)initWithMatch:(id)arg1 players:(id)arg2;
- (id)players;
- (id)playersProperties;
- (id)properties;

@end
