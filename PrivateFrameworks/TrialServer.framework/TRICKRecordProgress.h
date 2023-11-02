
@interface TRICKRecordProgress : NSObject <NSCopying> {
    unsigned long long  _size;
    unsigned long long  _transferred;
}

@property (nonatomic, readonly) unsigned long long size;
@property (nonatomic, readonly) unsigned long long transferred;

+ (id)progressWithSize:(unsigned long long)arg1 transferred:(unsigned long long)arg2;

- (id)copyWithReplacementSize:(unsigned long long)arg1;
- (id)copyWithReplacementTransferred:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithSize:(unsigned long long)arg1 transferred:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToProgress:(id)arg1;
- (unsigned long long)size;
- (unsigned long long)transferred;

@end
