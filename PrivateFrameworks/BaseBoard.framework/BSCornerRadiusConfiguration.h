
@interface BSCornerRadiusConfiguration : NSObject <BSXPCCoding, NSCopying> {
    double  _bottomLeft;
    double  _bottomRight;
    double  _topLeft;
    double  _topRight;
}

@property (nonatomic, readonly) double bottomLeft;
@property (nonatomic, readonly) double bottomRight;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCongruent;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double topLeft;
@property (nonatomic, readonly) double topRight;

- (double)bottomLeft;
- (double)bottomRight;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithXPCDictionary:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCornerRadius:(double)arg1;
- (id)initWithTopLeft:(double)arg1 bottomLeft:(double)arg2 bottomRight:(double)arg3 topRight:(double)arg4;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isCongruent;
- (bool)isEqual:(id)arg1;
- (double)topLeft;
- (double)topRight;

@end
