
@interface ASDExtensionMonitor : NSObject {
    NSDictionary * _extensionAttributes;
    NSArray * _extensions;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    id  _matchingContext;
    id /* block */  _updateHandler;
}

@property (readonly) NSArray *extensions;
@property (nonatomic, copy) id /* block */ updateHandler;

- (void).cxx_destruct;
- (void)dealloc;
- (id)extensions;
- (id)initWithAttributes:(id)arg1;
- (void)setUpdateHandler:(id /* block */)arg1;
- (id /* block */)updateHandler;

@end
