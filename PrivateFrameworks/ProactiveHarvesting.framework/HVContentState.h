
@interface HVContentState : NSObject <NSCopying, NSMutableCopying> {
    NSSet * _consumers;
    unsigned char  _levelOfService;
}

- (void).cxx_destruct;
- (id)_initWithConsumers:(id)arg1 levelOfService:(unsigned char)arg2;
- (id)consumers;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithConsumers:(id)arg1 levelOfService:(unsigned char)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned char)levelOfService;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;

@end
