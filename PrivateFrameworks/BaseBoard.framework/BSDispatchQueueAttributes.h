
@interface BSDispatchQueueAttributes : NSObject <NSCopying> {
    NSObject<OS_dispatch_queue_attr> * _attrs;
    NSObject<OS_dispatch_queue> * _targetQueue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue_attr> *attributes;

+ (id)concurrent;
+ (id)serial;

- (void).cxx_destruct;
- (id)attributes;
- (id)autoreleaseFrequency:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)inactive;
- (id)serviceClass:(unsigned int)arg1;
- (id)serviceClass:(unsigned int)arg1 relativePriority:(int)arg2;
- (id)targetQueue:(id)arg1;

@end
