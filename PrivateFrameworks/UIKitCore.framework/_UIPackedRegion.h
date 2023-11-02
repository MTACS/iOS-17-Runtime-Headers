
@interface _UIPackedRegion : NSObject <NSCopying, NSSecureCoding, _UIHyperregion_Internal> {
    unsigned long long  __dimensions;
    NSArray * __regions;
}

@property (nonatomic, readonly) unsigned long long _dimensions;
@property (setter=_setRegions:, nonatomic, copy) NSArray *_regions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)keyPathsForValuesAffectingSelf;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_closestPoint:(double*)arg1 toPoint:(const double*)arg2;
- (unsigned long long)_dimensions;
- (bool)_isBoundaryCrossedFromPoint:(const double*)arg1 toPoint:(const double*)arg2;
- (id)_regions;
- (void)_setRegions:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDimensions:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;

@end
