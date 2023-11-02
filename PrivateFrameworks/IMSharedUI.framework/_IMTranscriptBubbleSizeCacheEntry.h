
@interface _IMTranscriptBubbleSizeCacheEntry : NSObject <NSCopying> {
    double  _maximumWidth;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (nonatomic) double maximumWidth;
@property (nonatomic, readonly) double minimumWidth;
@property (nonatomic) struct CGSize { double x1; double x2; } size;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 maximumWidth:(double)arg2;
- (double)maximumWidth;
- (double)minimumWidth;
- (void)setMaximumWidth:(double)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })size;

@end
