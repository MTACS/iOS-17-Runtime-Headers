
@interface IMMomentSharePresentationCache : NSObject <PXChangeObserver> {
    NSMutableDictionary * _cache;
    <IMMomentSharePresentationCacheDelegate> * _delegate;
    IMMomentShareCache * _momentShareCache;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <IMMomentSharePresentationCacheDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_momentShareCacheDidChange:(id)arg1;
- (id)delegate;
- (id)init;
- (id)initWithMomentShareCache:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)registerMomentShareItemForMessage:(id)arg1;
- (void)registerMomentShareURLString:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)statusPresentationForMomentShareURLString:(id)arg1;

@end
