
@interface SBAppLayoutAutoLayoutSpaceCacheKey : NSObject <NSCopying> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _containerBounds;
    long long  _containerOrientation;
    double  _floatingDockHeight;
    unsigned long long  _hash;
    bool  _hideDock;
    bool  _hideStrips;
    NSDictionary * _recordsForItems;
    NSArray * _zOrderedItems;
}

+ (id)cacheKeyForSnapshotOfAppLayout:(id)arg1 chamoisLayoutAttributes:(id)arg2 containerBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 containerOrientation:(long long)arg4 floatingDockHeight:(double)arg5 hideStrips:(bool)arg6 hideDock:(bool)arg7;

- (void).cxx_destruct;
- (id)_initWithAppLayout:(id)arg1 chamoisLayoutAttributes:(id)arg2 containerBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 containerOrientation:(long long)arg4 floatingDockHeight:(double)arg5 hideStrips:(bool)arg6 hideDock:(bool)arg7;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
