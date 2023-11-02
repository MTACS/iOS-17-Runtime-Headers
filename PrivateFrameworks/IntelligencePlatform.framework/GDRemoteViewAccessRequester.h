
@interface GDRemoteViewAccessRequester : NSObject <GDViewAccessRequester> {
    _PASLock * _lock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)currentProcessIsSandboxed;

- (void).cxx_destruct;
- (id)_requestAssertionForViewName:(id)arg1 error:(id*)arg2;
- (id)init;
- (id)requestAssertionForViewName:(id)arg1 error:(id*)arg2;

@end
