
@interface NSExtensionURLResult : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_dispatch_semaphore> * _sema;
    NSURL * _url;
}

@property (setter=setURL:, copy) NSURL *url;

- (id)copiedURL;
- (void)dealloc;
- (id)init;
- (void)setURL:(id)arg1;
- (void)signal;
- (id)url;
- (bool)wait:(double)arg1;

@end
