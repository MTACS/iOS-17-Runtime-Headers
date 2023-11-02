
@interface PBUIWallpaperGradient : NSObject <BSDescriptionProviding, NSCopying, NSSecureCoding> {
    NSArray * _colors;
    struct CGPoint { 
        double x; 
        double y; 
    }  _endPoint;
    NSArray * _locations;
    struct CGPoint { 
        double x; 
        double y; 
    }  _startPoint;
    NSString * _type;
}

@property (nonatomic, copy) NSArray *colors;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct CGPoint { double x1; double x2; } endPoint;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *locations;
@property (nonatomic) struct CGPoint { double x1; double x2; } startPoint;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cgColors;
- (id)colors;
- (void)configureLayer:(id)arg1;
- (struct CGGradient { }*)copyCGGradient;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (struct CGPoint { double x1; double x2; })endPoint;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)locations;
- (void)setColors:(id)arg1;
- (void)setEndPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setLocations:(id)arg1;
- (void)setStartPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setType:(id)arg1;
- (struct CGPoint { double x1; double x2; })startPoint;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)type;

@end
