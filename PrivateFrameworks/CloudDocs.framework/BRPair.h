
@interface BRPair : NSObject <NSCopying> {
    id  _left;
    id  _right;
}

@property (nonatomic, readonly) id left;
@property (nonatomic, readonly) id right;

+ (id)pairWithLeft:(id)arg1 andRight:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)left;
- (id)right;

@end
