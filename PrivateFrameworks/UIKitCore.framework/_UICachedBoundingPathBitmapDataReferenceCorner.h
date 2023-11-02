
@interface _UICachedBoundingPathBitmapDataReferenceCorner : NSObject <NSSecureCoding> {
    struct _UIBoundingPathBitmapDataCorner { 
        unsigned long long location; 
        unsigned long long radius; 
        unsigned long long size; 
        bool edgePositionsUseLargeValues; 
        void *referenceEdgePositionsByRow; 
        void *referenceEdgePositionsByCol; 
    }  _referenceCorner;
}

+ (id)cachedReferenceCornerForRadius:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithReferenceCorner:(struct _UIBoundingPathBitmapDataCorner { unsigned long long x1; unsigned long long x2; unsigned long long x3; bool x4; void *x5; void *x6; })arg1;
- (struct _UIBoundingPathBitmapDataCorner { unsigned long long x1; unsigned long long x2; unsigned long long x3; bool x4; void *x5; void *x6; })referenceCornerCopy;

@end
