
@interface _MKMultiPartLabelCacheKey : NSObject <NSCopying> {
    NSAttributedString * _attributedString;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (nonatomic, readonly, copy) NSAttributedString *attributedString;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;

- (void).cxx_destruct;
- (id)attributedString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithAttributedString:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (bool)isEqual:(id)arg1;
- (struct CGSize { double x1; double x2; })size;

@end
