
@interface _EXQueryController : NSObject <_EXActiveQueryObserver, _EXServiceClientObserver> {
    <_EXQueryControllerDelegate> * _delegate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _extensionsLock;
    NSOrderedSet * _internalExtensions;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    NSArray * _queries;
    unsigned long long  _unelectedCount;
}

@property (readonly, copy) NSString *debugDescription;
@property <_EXQueryControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSArray *extensionIdentities;
@property (readonly) NSArray *extensions;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; }*extensionsLock;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSOrderedSet *internalExtensions;
@property (readonly) NSObject<OS_dispatch_queue> *notificationQueue;
@property (readonly, copy) NSArray *queries;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long unelectedCount;

+ (id)asyncQueryQueue;
+ (id)executeQueries:(id)arg1;
+ (void)executeQueries:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)executeQuery:(id)arg1;
+ (void)executeQuery:(id)arg1 completionHandler:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)extensionIdentities;
- (id)extensions;
- (struct os_unfair_lock_s { unsigned int x1; }*)extensionsLock;
- (id)initWithQueries:(id)arg1;
- (id)initWithQueries:(id)arg1 delegate:(id)arg2;
- (id)internalExtensions;
- (id)notificationQueue;
- (id)queries;
- (void)query:(id)arg1 resultDidUpdate:(id)arg2;
- (void)resultDidUpdate:(id)arg1;
- (void)resume;
- (void)setDelegate:(id)arg1;
- (void)setInternalExtensions:(id)arg1;
- (void)setUnelectedCount:(unsigned long long)arg1;
- (void)suspend;
- (unsigned long long)unelectedCount;

@end
