
@interface CKMentionEntityNode : NSObject {
    NSMutableDictionary * _children;
    NSMutableSet * _entities;
    NSString * _key;
    NSMutableSet * _possibleEntities;
}

@property (nonatomic, retain) NSMutableDictionary *children;
@property (nonatomic, retain) NSMutableSet *entities;
@property (nonatomic, retain) NSString *key;
@property (nonatomic, retain) NSMutableSet *possibleEntities;

- (void).cxx_destruct;
- (void)addChild:(id)arg1;
- (void)addEntity:(id)arg1;
- (void)addPossibleEntity:(id)arg1;
- (id)childWithKey:(id)arg1;
- (id)children;
- (id)entities;
- (id)key;
- (id)possibleEntities;
- (void)setChildren:(id)arg1;
- (void)setEntities:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setPossibleEntities:(id)arg1;

@end
