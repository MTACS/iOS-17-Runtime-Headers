
@interface _SBAppLayoutAutoLayoutSpaceCacheKeyDisplayItemRecord : NSObject {
    struct CGPoint { 
        double x; 
        double y; 
    }  _center;
    long long  _contentOrientation;
    unsigned long long  _hash;
    long long  _occlusionState;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    long long  _sizingPolicy;
}

@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } center;
@property (nonatomic, readonly) long long contentOrientation;
@property (nonatomic, readonly) long long occlusionState;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (nonatomic, readonly) long long sizingPolicy;

+ (id)itemRecordForLayoutAttributes:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 containerBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;

- (void)_appendToDescriptionBuilder:(id)arg1;
- (void)_appendToHashBuilder:(id)arg1;
- (id)_initWithRecordForLayoutAttributes:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 containerBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (struct CGPoint { double x1; double x2; })center;
- (long long)contentOrientation;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (long long)occlusionState;
- (struct CGSize { double x1; double x2; })size;
- (long long)sizingPolicy;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
