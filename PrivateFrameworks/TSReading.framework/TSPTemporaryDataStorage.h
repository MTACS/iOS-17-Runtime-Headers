
@interface TSPTemporaryDataStorage : TSPFileDataStorage {
    NSURL * _URL;
    SFUCryptoKey * _decryptionKey;
    bool  _isMissingData;
}

@property (nonatomic) bool isMissingData;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 decryptionKey:(id)arg2;
- (bool)isMissingData;
- (void)performIOChannelReadWithAccessor:(id /* block */)arg1;
- (void)performReadWithAccessor:(id /* block */)arg1;
- (void)setIsMissingData:(bool)arg1;

@end
