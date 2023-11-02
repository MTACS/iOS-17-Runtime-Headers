
@interface _SBPowerAssertionContext : NSObject {
    id /* block */  _collectionBlock;
    NSString * _processName;
}

@property (nonatomic, copy) id /* block */ collectionBlock;
@property (nonatomic, copy) NSString *processName;

- (void).cxx_destruct;
- (id /* block */)collectionBlock;
- (id)processName;
- (void)setCollectionBlock:(id /* block */)arg1;
- (void)setProcessName:(id)arg1;

@end
