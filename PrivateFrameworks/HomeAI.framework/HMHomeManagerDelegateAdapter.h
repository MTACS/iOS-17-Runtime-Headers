
@interface HMHomeManagerDelegateAdapter : NSObject <HMHomeManagerDelegate> {
    id /* block */  _didUpdateHomes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) id /* block */ didUpdateHomes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)didUpdateHomes;
- (void)homeManagerDidUpdateHomes:(id)arg1;
- (void)setDidUpdateHomes:(id /* block */)arg1;

@end
