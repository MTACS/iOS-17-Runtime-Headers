
@interface CACProfanityNode : NSObject {
    NSMutableDictionary * _childMap;
    NSMutableDictionary * _originalWordMap;
    NSMutableDictionary * _terminalMap;
}

- (void).cxx_destruct;
- (id)childForKey:(id)arg1;
- (void)createChildForKey:(id)arg1;
- (id)description;
- (id)init;
- (id)originalWordForKey:(id)arg1;
- (void)setTerminal:(id)arg1 originalWord:(id)arg2 forKey:(id)arg3;
- (id)terminalForKey:(id)arg1;

@end
