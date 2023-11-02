
@interface _SBDisplaysWithSizePredicate : SBDisplayModePredicate {
    unsigned long long  _diagonal;
    struct CGSize { 
        double width; 
        double height; 
    }  _nativePixelSize;
}

+ (id)fromDefaultsKey:(id)arg1;

- (id)defaultsKeyRepresentation;
- (id)description;
- (unsigned long long)hash;
- (id)initWithDiagonal:(unsigned long long)arg1 pixelSize:(struct CGSize { double x1; double x2; })arg2;
- (id)initWithDisplay:(id)arg1 useNativeSize:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (bool)matchesDisplay:(id)arg1;

@end
