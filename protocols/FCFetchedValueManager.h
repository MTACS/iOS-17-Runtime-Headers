
@protocol FCFetchedValueManager <NSObject>

@required

- (void)addObserver:(id <FCFetchedValueManagerObserving>)arg1;
- (void)fetchValueWithCachePolicy:(void *)arg1 qualityOfService:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: unsigned long long, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <NFCopying> *, NSError *, void*
- (void)fetchValueWithQualityOfService:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <NFCopying> *, NSError *, void*
- (void)removeObserver:(id <FCFetchedValueManagerObserving>)arg1;
- (<NFCopying> *)value;

@end
