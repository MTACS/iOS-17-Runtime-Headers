
@interface SBHIconAccessoryVisualConfiguration : NSObject <BSDescriptionProviding, NSCopying> {
    double  _fontSize;
    struct CGPoint { 
        double x; 
        double y; 
    }  _offset;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double fontSize;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGPoint { double x1; double x2; } offset;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (readonly) Class superclass;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (double)fontSize;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (struct CGPoint { double x1; double x2; })offset;
- (void)setFontSize:(double)arg1;
- (void)setOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })size;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
