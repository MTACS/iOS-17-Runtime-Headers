
@interface XBDisplayEdgeInsetsWrapper : NSObject <BSXPCCoding, NSCopying, NSSecureCoding> {
    double  _bottomInset;
    double  _leftInset;
    double  _rightInset;
    double  _topInset;
}

@property (nonatomic, readonly) double bottomInset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double leftInset;
@property (nonatomic, readonly) double rightInset;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double topInset;

+ (id)makeWithEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
+ (bool)supportsSecureCoding;

- (double)bottomInset;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (bool)hasZeroInsets;
- (id)initWithCoder:(id)arg1;
- (id)initWithTop:(double)arg1 left:(double)arg2 bottom:(double)arg3 right:(double)arg4;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (double)leftInset;
- (double)rightInset;
- (double)topInset;

@end
