
@interface UIKeyboardSliceStore : NSObject {
    NSMutableDictionary * _store;
}

+ (void)archiveSet:(id)arg1;
+ (id)sharedStore;
+ (id)sliceSetForID:(id)arg1;
+ (id)sliceSetIDForKeyplaneName:(id)arg1 type:(long long)arg2 orientation:(long long)arg3;

- (void).cxx_destruct;
- (void)addSet:(id)arg1;
- (id)init;
- (id)sliceSetForID:(id)arg1;

@end
