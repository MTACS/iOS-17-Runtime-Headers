
@interface HAPSuspendedAccessory : HMFObject {
    NSString * _identifier;
    NSString * _name;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _type;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (id)description;
- (id)identifier;
- (id)initWithName:(id)arg1 identifier:(id)arg2 type:(unsigned long long)arg3 queue:(id)arg4;
- (id)name;
- (id)queue;
- (void)setQueue:(id)arg1;
- (unsigned long long)type;
- (void)wakeWithCompletion:(id /* block */)arg1;

@end
