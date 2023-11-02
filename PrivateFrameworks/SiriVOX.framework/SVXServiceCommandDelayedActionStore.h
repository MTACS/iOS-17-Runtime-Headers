
@interface SVXServiceCommandDelayedActionStore : NSObject {
    NSMutableDictionary * _actionsByKey;
}

- (void).cxx_destruct;
- (id)actionForKey:(id)arg1;
- (id)init;
- (void)removeActionForKey:(id)arg1;
- (void)removeAllActions;
- (void)setAction:(id)arg1 forKey:(id)arg2;

@end
