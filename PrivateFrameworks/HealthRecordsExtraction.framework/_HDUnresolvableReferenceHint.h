
@interface _HDUnresolvableReferenceHint : NSObject <NSCopying> {
    unsigned long long  _hint;
    NSString * _reference;
}

@property (nonatomic, readonly) unsigned long long hint;
@property (nonatomic, readonly, copy) NSString *reference;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (unsigned long long)hint;
- (id)initWithReference:(id)arg1 hint:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)reference;

@end
