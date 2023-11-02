
@interface PVTaskToken : NSObject {
    PVTaskTokenPool * _pool;
    bool  _returned;
    unsigned long long  _tokenId;
}

@property (nonatomic, readonly) PVTaskTokenPool *pool;
@property (nonatomic) bool returned;
@property (nonatomic, readonly) unsigned long long tokenId;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithPool:(id)arg1 tokenId:(unsigned long long)arg2;
- (id)pool;
- (void)returnToPool;
- (bool)returned;
- (void)setReturned:(bool)arg1;
- (unsigned long long)tokenId;

@end
