
@interface CNTUCallProviderManagerDelegate : NSObject <TUCallProviderManagerDelegate> {
    id /* block */  _block;
}

@property (nonatomic, readonly, copy) id /* block */ block;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)block;
- (id)initWithBlock:(id /* block */)arg1;
- (void)providersChangedForProviderManager:(id)arg1;

@end
