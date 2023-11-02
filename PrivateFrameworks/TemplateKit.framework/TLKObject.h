
@interface TLKObject : NSObject <TLKObservable, TLKObserver> {
    long long  batchUpdateCount;
    <TLKObserver> * observer;
}

@property (nonatomic) long long batchUpdateCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property <TLKObserver> *observer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)batchUpdateCount;
- (id)observer;
- (void)propertiesDidChange;
- (void)setBatchUpdateCount:(long long)arg1;
- (void)setObserver:(id)arg1;

@end
