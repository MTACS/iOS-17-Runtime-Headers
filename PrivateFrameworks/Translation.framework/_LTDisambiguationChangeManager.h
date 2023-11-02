
@interface _LTDisambiguationChangeManager : NSObject {
    NSMutableDictionary * _changeMapping;
}

@property (nonatomic, readonly, copy) NSDictionary *changeMapping;

- (void).cxx_destruct;
- (void)addUserSelection:(id)arg1;
- (id)changeMapping;
- (bool)hasAnyChangeOfType:(unsigned long long)arg1;
- (id)init;
- (void)reset;
- (bool)restoreChangesToResult:(id)arg1;

@end
