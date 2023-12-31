
@interface _SPBucketSet : NSObject {
    long long  _count;
    struct __CFDictionary { } * _members;
    NSObject<OS_dispatch_queue> * _queue;
}

@property long long count;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)addValue:(long long)arg1 forKey:(id)arg2;
- (long long)count;
- (void)dealloc;
- (void)decay:(long long)arg1;
- (id)init;
- (id)queue;
- (void)removeValueForKey:(id)arg1;
- (void)setCount:(long long)arg1;
- (void)setQueue:(id)arg1;
- (long long)valueForKey:(id)arg1;

@end
