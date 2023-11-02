
@interface SGEKEventStoreProvider : NSObject {
    id /* block */  _callBlockWithEKEventStoreForReading;
    id /* block */  _newEKEventStoreGetter;
}

+ (id)defaultEKStoreProvider;

- (void).cxx_destruct;
- (id)initWithNewEKEventStoreGetter:(id /* block */)arg1 callBlockWithEKEventStoreForReading:(id /* block */)arg2;

@end
