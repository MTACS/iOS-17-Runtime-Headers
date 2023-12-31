
@interface ACDQueueDictionary : NSObject {
    NSMutableDictionary * _allQueuesByID;
}

- (void).cxx_destruct;
- (void)addObject:(id)arg1 toQueueForKey:(id)arg2;
- (id)dequeueAllObjectsInQueueForKey:(id)arg1;
- (id)dequeueFirstObjectInQueueForKey:(id)arg1;
- (id)description;
- (id)firstObjectInQueueForKey:(id)arg1;
- (id)init;
- (bool)isEmpty;
- (bool)isQueueEmptyForKey:(id)arg1;
- (id)keyForRandomQueue;

@end
