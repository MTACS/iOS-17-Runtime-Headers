
@interface ICTuple : NSObject {
    id  _firstObject;
    id  _secondObject;
}

@property (nonatomic, readonly) id firstObject;
@property (nonatomic, readonly) id secondObject;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)firstObject;
- (unsigned long long)hash;
- (id)initWithFirstObject:(id)arg1 secondObject:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)secondObject;

@end
