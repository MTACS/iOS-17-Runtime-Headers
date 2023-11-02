
@interface CAMBufferKeyValueObserverObservanceChange : CAMBufferObservanceChange {
    NSDictionary * _change;
    NSString * _keyPath;
    NSObject * _object;
}

@property (nonatomic, readonly, copy) NSDictionary *change;
@property (nonatomic, readonly, copy) NSString *keyPath;
@property (nonatomic, readonly) NSObject *object;

- (void).cxx_destruct;
- (id)change;
- (id)initWithKeyPath:(id)arg1 ofObject:(id)arg2 withChange:(id)arg3;
- (id)keyPath;
- (id)object;

@end
