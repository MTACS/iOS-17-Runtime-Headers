
@interface TIStatisticChangeCache : NSObject {
    NSMutableDictionary * _cacheWithInputMode;
    NSMutableDictionary * _cacheWithoutInputMode;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addValue:(int)arg1 toStatisticWithName:(id)arg2 andInputMode:(id)arg3;
- (void)addValue:(int)arg1 toStatisticWithName:(id)arg2 inCache:(id)arg3;
- (id)flush;
- (id)init;

@end
