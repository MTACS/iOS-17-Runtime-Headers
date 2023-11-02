
@interface CKVItemIdentity : NSObject <NSCopying> {
    NSNumber * _contentHash;
    NSNumber * _instanceHash;
}

@property (nonatomic, readonly) NSNumber *contentHash;
@property (nonatomic, readonly) NSNumber *instanceHash;

- (void).cxx_destruct;
- (id)contentHash;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithContentHash:(id)arg1 instanceHash:(id)arg2;
- (id)instanceHash;
- (bool)isEqual:(id)arg1;

@end
