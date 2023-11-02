
@interface HDConceptIndexState : NSObject <NSCopying, NSSecureCoding> {
    HKQueryAnchor * _anchor;
    long long  _generation;
}

@property (nonatomic, readonly, copy) HKQueryAnchor *anchor;
@property (nonatomic, readonly) long long generation;

+ (id)stateWithGeneration:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)anchor;
- (id)copyWithAnchor:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (long long)generation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithGeneration:(long long)arg1 anchor:(id)arg2;
- (bool)isEqual:(id)arg1;

@end
