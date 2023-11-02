
@interface ICMentionsParticipantNode : NSObject {
    NSMutableDictionary * _children;
    bool  _isAll;
    bool  _isPossibleAll;
    NSString * _key;
    NSMutableSet * _participants;
    NSMutableSet * _possibleParticipants;
}

@property (nonatomic, readonly) NSMutableDictionary *children;
@property (nonatomic) bool isAll;
@property (nonatomic) bool isPossibleAll;
@property (nonatomic, copy) NSString *key;
@property (nonatomic, readonly) NSMutableSet *participants;
@property (nonatomic, readonly) NSMutableSet *possibleParticipants;

- (void).cxx_destruct;
- (void)addChild:(id)arg1;
- (void)addParticipant:(id)arg1;
- (void)addPossibleParticipant:(id)arg1;
- (id)children;
- (bool)isAll;
- (bool)isPossibleAll;
- (id)key;
- (id)participants;
- (id)possibleParticipants;
- (void)setIsAll:(bool)arg1;
- (void)setIsPossibleAll:(bool)arg1;
- (void)setKey:(id)arg1;

@end
