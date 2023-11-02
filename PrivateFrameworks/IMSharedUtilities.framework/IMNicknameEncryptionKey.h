
@interface IMNicknameEncryptionKey : NSObject {
    NSData * _data;
}

@property (readonly) const void*bytes;
@property (nonatomic, retain) NSData *data;
@property (nonatomic, readonly) unsigned long long length;

- (void).cxx_destruct;
- (const void*)bytes;
- (id)data;
- (id)initWithData:(id)arg1;
- (unsigned long long)length;
- (void)setData:(id)arg1;

@end
