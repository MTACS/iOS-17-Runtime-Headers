
@interface MRColorComponents : NSObject <NSCopying> {
    float  _alpha;
    float  _blue;
    float  _green;
    float  _red;
}

@property (nonatomic) float alpha;
@property (nonatomic) float blue;
@property (nonatomic) float green;
@property (nonatomic, readonly) _MRColorProtobuf *protobuf;
@property (nonatomic) float red;

- (float)alpha;
- (float)blue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (float)green;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)protobuf;
- (float)red;
- (void)setAlpha:(float)arg1;
- (void)setBlue:(float)arg1;
- (void)setGreen:(float)arg1;
- (void)setRed:(float)arg1;

@end
