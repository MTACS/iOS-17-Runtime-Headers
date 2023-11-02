
@interface PXProgrammaticNavigationRequest : NSObject {
    id /* block */  _completionHandler;
    PXProgrammaticNavigationDestination * _destination;
    unsigned long long  _options;
}

@property (nonatomic, readonly, copy) id /* block */ completionHandler;
@property (nonatomic, readonly) PXProgrammaticNavigationDestination *destination;
@property (nonatomic, readonly) unsigned long long options;

- (void).cxx_destruct;
- (void)cancel;
- (id /* block */)completionHandler;
- (id)description;
- (id)destination;
- (id)init;
- (id)initWithDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (unsigned long long)options;

@end
