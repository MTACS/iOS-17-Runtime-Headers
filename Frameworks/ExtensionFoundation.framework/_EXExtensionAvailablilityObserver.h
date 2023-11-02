
@interface _EXExtensionAvailablilityObserver : NSObject <_EXActiveQueryObserver, _EXServiceClientObserver> {
    id /* block */  _block;
    NSArray * _queries;
}

@property (readonly) id /* block */ block;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSArray *queries;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)block;
- (void)dealloc;
- (id)initWithObserver:(id /* block */)arg1;
- (void)invalidate;
- (id)queries;
- (void)query:(id)arg1 resultDidUpdate:(id)arg2;
- (void)start;

@end
