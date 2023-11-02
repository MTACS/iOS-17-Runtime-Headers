
@interface TIAdhocEventDispatcher : NSObject {
    NSMutableDictionary * _eventSpecMap;
}

@property (nonatomic, retain) NSMutableDictionary *eventSpecMap;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)dispatchEventForStatisticWithName:(id)arg1 andValue:(long long)arg2;
- (void)dispatchEventForStatisticWithName:(id)arg1 andValue:(long long)arg2 withCompletionHandler:(id /* block */)arg3;
- (id)eventSpecMap;
- (id)initFromConfig:(id)arg1;
- (id)loadEventSpecMapFromConfig:(id)arg1;
- (id)replacePeriodsInString:(id)arg1;
- (void)setEventSpecMap:(id)arg1;

@end
