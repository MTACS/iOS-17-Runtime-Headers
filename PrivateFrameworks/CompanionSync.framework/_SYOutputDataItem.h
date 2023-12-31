
@interface _SYOutputDataItem : NSObject {
    unsigned long long  _bytesSent;
    id /* block */  _callback;
    NSData * _data;
}

@property (nonatomic) unsigned long long bytesSent;
@property (nonatomic, copy) id /* block */ callback;
@property (nonatomic, copy) NSData *data;

- (void).cxx_destruct;
- (unsigned long long)bytesSent;
- (id /* block */)callback;
- (id)data;
- (void)setBytesSent:(unsigned long long)arg1;
- (void)setCallback:(id /* block */)arg1;
- (void)setData:(id)arg1;

@end
