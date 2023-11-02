
@interface _NSConcreteBlockSinkObservation : NSObservation {
    NSObject<NSObservable> * _LHSobservable;
    id /* block */  _block;
    int  _tag;
}

- (id*)_observerStorage;
- (void*)_observerStorageOfSize:(unsigned long long)arg1;
- (void)_receiveBox:(id)arg1;
- (void)dealloc;
- (id)debugDescription;
- (void)finishObserving;
- (id)initWithObservable:(id)arg1 blockSink:(id /* block */)arg2 tag:(int)arg3;
- (bool)isEqual:(id)arg1;
- (void)remove;

@end
