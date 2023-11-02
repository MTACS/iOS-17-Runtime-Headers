
@interface FrameworkCache : NSObject {
    NSMutableDictionary * _selectorValueDict;
}

+ (unsigned char)getCachePolicyForSelector:(SEL)arg1;
+ (SEL)getCacheableSelectorForNotification:(id)arg1;

- (void).cxx_destruct;
- (void)handleDisconnection;
- (void)handleNotification:(id)arg1;
- (void)handleValue:(id)arg1 forSelector:(SEL)arg2;
- (id)init;
- (id)valueForSelector:(SEL)arg1;

@end
