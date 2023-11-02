
@interface TMLDirectionalEdgeInsets : NSObject <NSCopying, TMLDirectionalEdgeInsetsJSExports> {
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _directionalEdgeInsets;
}

@property (nonatomic, readonly) double bottom;
@property (nonatomic, readonly) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } directionalEdgeInsets;
@property (nonatomic, readonly) double leading;
@property (nonatomic, readonly) double top;
@property (nonatomic, readonly) double trailing;

+ (void)initializeJSContext:(id)arg1;

- (id)NSDirectionalEdgeInsetsValue;
- (double)bottom;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })directionalEdgeInsets;
- (id)initWithDirectionalEdgeInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (double)leading;
- (double)top;
- (double)trailing;

@end
