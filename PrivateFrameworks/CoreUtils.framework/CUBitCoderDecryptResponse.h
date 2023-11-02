
@interface CUBitCoderDecryptResponse : NSObject {
    NSData * _data;
    id  _identifier;
}

@property (nonatomic, copy) NSData *data;
@property (nonatomic, copy) id identifier;

- (void).cxx_destruct;
- (id)data;
- (id)identifier;
- (void)setData:(id)arg1;
- (void)setIdentifier:(id)arg1;

@end
