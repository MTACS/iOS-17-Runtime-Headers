
@interface NTKComplicationNoContentImages : NSObject <NSCopying, NSSecureCoding> {
    UIImage * _circularSmallImage;
    UIImage * _extraLargeImage;
    UIImage * _modularSmallImage;
    UIImage * _utilitarianSmallImage;
}

@property (nonatomic, retain) UIImage *circularSmallImage;
@property (nonatomic, retain) UIImage *extraLargeImage;
@property (nonatomic, retain) UIImage *modularSmallImage;
@property (nonatomic, retain) UIImage *utilitarianSmallImage;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)circularSmallImage;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)extraLargeImage;
- (id)initWithCoder:(id)arg1;
- (id)modularSmallImage;
- (void)setCircularSmallImage:(id)arg1;
- (void)setExtraLargeImage:(id)arg1;
- (void)setModularSmallImage:(id)arg1;
- (void)setUtilitarianSmallImage:(id)arg1;
- (id)utilitarianSmallImage;

@end
