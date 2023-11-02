
@interface RTPair : NSObject <NSCopying, NSSecureCoding> {
    id  _firstObject;
    id  _secondObject;
}

@property (nonatomic, readonly) id firstObject;
@property (nonatomic, readonly) id secondObject;

+ (Class)getClusterClassOfObject:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)firstObject;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFirstObject:(id)arg1 secondObject:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)secondObject;

@end
