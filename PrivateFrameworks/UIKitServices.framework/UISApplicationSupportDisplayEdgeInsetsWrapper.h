
@interface UISApplicationSupportDisplayEdgeInsetsWrapper : NSObject <BSXPCCoding, NSCopying> {
    double  _bottomInset;
    double  _leftInset;
    double  _rightInset;
    double  _topInset;
}

@property (nonatomic) double bottomInset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double leftInset;
@property (nonatomic) double rightInset;
@property (readonly) Class superclass;
@property (nonatomic) double topInset;

- (double)bottomInset;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithTop:(double)arg1 left:(double)arg2 bottom:(double)arg3 right:(double)arg4;
- (id)initWithXPCDictionary:(id)arg1;
- (double)leftInset;
- (double)rightInset;
- (void)setBottomInset:(double)arg1;
- (void)setLeftInset:(double)arg1;
- (void)setRightInset:(double)arg1;
- (void)setTopInset:(double)arg1;
- (double)topInset;

@end
