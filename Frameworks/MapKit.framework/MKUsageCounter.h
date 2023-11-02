
@interface MKUsageCounter : NSObject {
    NSMutableSet * _countedEventsSet;
}

+ (id)sharedCounter;

- (void).cxx_destruct;
- (void)count:(unsigned long long)arg1;
- (void)countUsageOfTypeIfNeeded:(unsigned long long)arg1;
- (void)createCountedEventsSetIfNeeded;
- (id)fieldNameForType:(unsigned long long)arg1;

@end
