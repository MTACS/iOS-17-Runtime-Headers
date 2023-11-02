
@interface SKWaitingForDiskElement : NSObject {
    id /* block */  _block;
    NSDictionary * _diskDictionary;
}

@property (copy) id /* block */ block;
@property (retain) NSDictionary *diskDictionary;

- (void).cxx_destruct;
- (id /* block */)block;
- (id)diskDictionary;
- (void)setBlock:(id /* block */)arg1;
- (void)setDiskDictionary:(id)arg1;

@end
