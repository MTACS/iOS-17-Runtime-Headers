
@interface SPUnknownProductMetadata : NSObject <NSCopying, NSSecureCoding> {
    NSURL * _image;
    NSURL * _image2x;
    NSURL * _image3x;
    NSArray * _moreDescription;
    double  _percentageX;
    double  _percentageY;
    NSString * _title;
}

@property (nonatomic, copy) NSURL *image;
@property (nonatomic, copy) NSURL *image2x;
@property (nonatomic, copy) NSURL *image3x;
@property (nonatomic, copy) NSArray *moreDescription;
@property (nonatomic) double percentageX;
@property (nonatomic) double percentageY;
@property (nonatomic, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)image;
- (id)image2x;
- (id)image3x;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 description:(id)arg2 percentageX:(double)arg3 percentageY:(double)arg4 image:(id)arg5 image2x:(id)arg6 image3x:(id)arg7;
- (id)moreDescription;
- (double)percentageX;
- (double)percentageY;
- (void)setImage2x:(id)arg1;
- (void)setImage3x:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setMoreDescription:(id)arg1;
- (void)setPercentageX:(double)arg1;
- (void)setPercentageY:(double)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
