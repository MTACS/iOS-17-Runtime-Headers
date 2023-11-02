
@interface ICHashtagsNode : NSObject {
    NSMutableDictionary * _children;
    NSMutableSet * _hashtagSuggestions;
    bool  _isPossibleAll;
    NSString * _key;
    NSMutableSet * _possibleHashtagSuggestions;
}

@property (nonatomic, readonly) NSMutableDictionary *children;
@property (nonatomic, readonly) NSMutableSet *hashtagSuggestions;
@property (nonatomic) bool isPossibleAll;
@property (nonatomic, copy) NSString *key;
@property (nonatomic, readonly) NSMutableSet *possibleHashtagSuggestions;

- (void).cxx_destruct;
- (void)addChild:(id)arg1;
- (void)addHashtagSuggestion:(id)arg1;
- (void)addPossibleHashtagSuggestion:(id)arg1;
- (id)children;
- (id)hashtagSuggestions;
- (bool)isPossibleAll;
- (id)key;
- (id)possibleHashtagSuggestions;
- (void)setIsPossibleAll:(bool)arg1;
- (void)setKey:(id)arg1;

@end
