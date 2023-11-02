
@interface AMUICountingSentinel : NSObject <BSDescriptionStreamable> {
    long long  _counter;
    NSMutableArray * _deferredBlocks;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addToCounter:(long long)arg1;
- (void)appendDescriptionToFormatter:(id)arg1;
- (id)description;

@end
