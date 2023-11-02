
@interface TRIRunningXPCActivityDescriptor : NSObject <NSCopying> {
    NSObject<OS_xpc_object> * _activity;
    unsigned long long  _capabilities;
    id /* block */  _completion;
    unsigned int  _generationCount;
    NSString * _name;
    id /* block */  _shouldDefer;
    NSObject<OS_os_transaction> * _txn;
}

@property (nonatomic, readonly) NSObject<OS_xpc_object> *activity;
@property (nonatomic, readonly) unsigned long long capabilities;
@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, readonly) unsigned int generationCount;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, copy) id /* block */ shouldDefer;

- (void).cxx_destruct;
- (id)activity;
- (unsigned long long)capabilities;
- (id /* block */)completion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned int)generationCount;
- (id)init;
- (id)initForImmediateWorkWithCapabilities:(unsigned long long)arg1;
- (id)initWithActivity:(id)arg1 capabilities:(unsigned long long)arg2 name:(id)arg3;
- (id)name;
- (void)setCompletion:(id /* block */)arg1;
- (void)setShouldDefer:(id /* block */)arg1;
- (id /* block */)shouldDefer;

@end
