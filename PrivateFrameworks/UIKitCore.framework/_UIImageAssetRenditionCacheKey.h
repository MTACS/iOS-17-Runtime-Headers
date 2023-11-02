
@interface _UIImageAssetRenditionCacheKey : NSObject {
    unsigned int  _drawMode;
    struct { 
        unsigned int bold : 1; 
        unsigned int letterpress : 1; 
    }  _flags;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    NSString * appearanceName;
    UIColor * resolvedTintColor;
}

+ (id)keyWithSize:(struct CGSize { double x1; double x2; })arg1 unresolvedTintColor:(id)arg2 traitCollection:(id)arg3 bold:(bool)arg4 letterpress:(bool)arg5 drawMode:(unsigned int)arg6;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;

@end
