
@interface CKPackageSection : NSObject {
    long long  _index;
    NSData * _signature;
    unsigned long long  _size;
}

@property (nonatomic, readonly) long long index;
@property (nonatomic, readonly, copy) NSData *signature;
@property (nonatomic, readonly) unsigned long long size;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)description;
- (long long)index;
- (id)initWithIndex:(long long)arg1 signature:(id)arg2 size:(unsigned long long)arg3;
- (id)signature;
- (unsigned long long)size;

@end
