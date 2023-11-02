
@interface CNPair : NSObject <NSCopying, NSSecureCoding> {
    id  _first;
    id  _second;
}

@property (readonly) id first;
@property (readonly) id second;

+ (id)pairWithFirst:(id)arg1 second:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)first;
- (unsigned long long)hash;
- (id)initNonMemoizedWithFirst:(id)arg1 second:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFirst:(id)arg1 second:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)second;

@end
