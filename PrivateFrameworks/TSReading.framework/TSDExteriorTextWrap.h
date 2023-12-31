
@interface TSDExteriorTextWrap : NSObject <NSCopying, NSMutableCopying> {
    double  _alphaThreshold;
    int  _direction;
    int  _fitType;
    bool  _isHTMLWrap;
    double  _margin;
    int  _type;
}

@property (nonatomic, readonly) double alphaThreshold;
@property (nonatomic, readonly) int direction;
@property (nonatomic, readonly) int fitType;
@property (nonatomic, readonly) bool isHTMLWrap;
@property (nonatomic, readonly) double margin;
@property (nonatomic, readonly) int type;

+ (id)exteriorTextWrap;
+ (id)exteriorTextWrapWithIsHTMLWrap:(bool)arg1 type:(int)arg2 direction:(int)arg3 fitType:(int)arg4 margin:(double)arg5 alphaThreshold:(double)arg6;

- (double)alphaThreshold;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (int)direction;
- (int)fitType;
- (id)init;
- (id)initWithIsHTMLWrap:(bool)arg1 type:(int)arg2 direction:(int)arg3 fitType:(int)arg4 margin:(double)arg5 alphaThreshold:(double)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isHTMLWrap;
- (double)margin;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (int)type;

@end
