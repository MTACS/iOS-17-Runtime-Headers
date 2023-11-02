
@interface DOCThumbnailDescriptor : NSObject {
    bool  _folded;
    bool  _interactive;
    double  _minimumSize;
    double  _scale;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    unsigned long long  _style;
}

@property (getter=isFolded, nonatomic, readonly) bool folded;
@property (getter=isInteractive, nonatomic, readonly) bool interactive;
@property (nonatomic, readonly) double minimumSize;
@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (nonatomic, readonly) unsigned long long style;

- (id)description;
- (unsigned long long)hash;
- (id)initWithScale:(double)arg1 style:(unsigned long long)arg2 isFolded:(bool)arg3 isInteractive:(bool)arg4 isFolder:(bool)arg5;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 minimumSize:(double)arg2 scale:(double)arg3 style:(unsigned long long)arg4 isFolded:(bool)arg5 isInteractive:(bool)arg6 isFolder:(bool)arg7;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 style:(unsigned long long)arg3 isFolded:(bool)arg4 isInteractive:(bool)arg5 isFolder:(bool)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isFolded;
- (bool)isInteractive;
- (double)minimumSize;
- (double)scale;
- (struct CGSize { double x1; double x2; })size;
- (unsigned long long)style;

@end
