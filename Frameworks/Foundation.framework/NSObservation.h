
@interface NSObservation : NSObject

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (id*)_observerStorage;
- (void*)_observerStorageOfSize:(unsigned long long)arg1;
- (id)initWithObservable:(id)arg1 blockSink:(id /* block */)arg2 tag:(int)arg3;
- (id)initWithObservable:(id)arg1 observer:(id)arg2;
- (void)remove;

@end
