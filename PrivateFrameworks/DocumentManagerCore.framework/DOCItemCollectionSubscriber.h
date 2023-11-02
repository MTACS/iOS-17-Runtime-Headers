
@interface DOCItemCollectionSubscriber : NSObject {
    NSUUID * _UUID;
    id /* block */  _updateBlock;
}

@property (retain) NSUUID *UUID;
@property (copy) id /* block */ updateBlock;

- (void).cxx_destruct;
- (id)UUID;
- (id)initWithUpdateBlock:(id /* block */)arg1;
- (void)setUUID:(id)arg1;
- (void)setUpdateBlock:(id /* block */)arg1;
- (id /* block */)updateBlock;

@end
