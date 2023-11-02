
@interface FBKTimeIntervals : NSObject {
    NSMutableDictionary * _events;
}

@property (nonatomic, retain) NSMutableDictionary *events;

+ (id)log;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)didEndEvent:(unsigned long long)arg1;
- (id)didEndEvent:(unsigned long long)arg1 context:(id)arg2;
- (void)didStartEvent:(unsigned long long)arg1;
- (id)events;
- (id)init;
- (id)keyForEvent:(unsigned long long)arg1 context:(id)arg2;
- (void)setEvents:(id)arg1;
- (void)willStartEvent:(unsigned long long)arg1 context:(id)arg2;

@end
