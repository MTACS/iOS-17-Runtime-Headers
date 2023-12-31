
@interface GQDPath : NSObject {
    char * mPathString;
}

- (struct CGPath { }*)createBezierPath;
- (void)dealloc;
- (bool)hasHorizontalFlip;
- (bool)hasVerticalFlip;
- (bool)horizontalFlip;
- (bool)isRect;
- (bool)isRectangular;
- (char *)pathStr;
- (bool)verticalFlip;

@end
