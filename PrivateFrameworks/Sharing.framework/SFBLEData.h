
@interface SFBLEData : NSObject {
    id /* block */  _completion;
    NSData * _data;
}

@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, copy) NSData *data;

- (void).cxx_destruct;
- (id /* block */)completion;
- (id)data;
- (void)setCompletion:(id /* block */)arg1;
- (void)setData:(id)arg1;

@end
