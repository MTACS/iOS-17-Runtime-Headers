
@interface __HMFSystemConfigurationDataSource : HMFObject <HMFSystemInfoNameDataSource> {
    <HMFSystemInfoNameDataSourceDelegate> * _delegate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _name;
    NSObject<OS_dispatch_queue> * _queue;
    struct __SCDynamicStore { } * _store;
}

@property (readonly, copy) NSString *debugDescription;
@property <HMFSystemInfoNameDataSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) struct __SCDynamicStore { }*store;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)name;
- (id)queue;
- (void)setDelegate:(id)arg1;
- (struct __SCDynamicStore { }*)store;

@end
