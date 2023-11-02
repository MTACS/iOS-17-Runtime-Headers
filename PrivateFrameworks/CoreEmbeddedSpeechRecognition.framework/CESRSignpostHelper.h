
@interface CESRSignpostHelper : NSObject {
    NSMutableDictionary * _eventNameToId;
}

- (void).cxx_destruct;
- (unsigned long long)fetchAndDestroySignpostIdForEventName:(id)arg1;
- (id)init;
- (void)storeSignpostId:(unsigned long long)arg1 forEventName:(id)arg2;

@end
