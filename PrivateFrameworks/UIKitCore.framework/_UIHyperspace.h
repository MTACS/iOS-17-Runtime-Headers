
@interface _UIHyperspace : NSObject <NSCopying, NSSecureCoding, _UIHyperregion_Internal> {
    unsigned long long  __dimensions;
}

@property (nonatomic, readonly) unsigned long long _dimensions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void)_closestPoint:(double*)arg1 toPoint:(const double*)arg2;
- (unsigned long long)_dimensions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDimensions:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;

@end
