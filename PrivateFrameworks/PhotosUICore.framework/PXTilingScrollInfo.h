
@interface PXTilingScrollInfo : NSObject <NSCopying> {
    unsigned long long  _axis;
    struct CGSize { 
        double width; 
        double height; 
    }  _interpageSpacing;
    bool  _pagingEnabled;
    struct CGPoint { 
        double x; 
        double y; 
    }  _pagingOrigin;
}

@property (nonatomic) unsigned long long axis;
@property (nonatomic) struct CGSize { double x1; double x2; } interpageSpacing;
@property (getter=isPagingEnabled, nonatomic) bool pagingEnabled;
@property (nonatomic) struct CGPoint { double x1; double x2; } pagingOrigin;

- (unsigned long long)axis;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (struct CGSize { double x1; double x2; })interpageSpacing;
- (bool)isEqual:(id)arg1;
- (bool)isPagingEnabled;
- (struct CGPoint { double x1; double x2; })pagingOrigin;
- (void)setAxis:(unsigned long long)arg1;
- (void)setInterpageSpacing:(struct CGSize { double x1; double x2; })arg1;
- (void)setPagingEnabled:(bool)arg1;
- (void)setPagingOrigin:(struct CGPoint { double x1; double x2; })arg1;

@end