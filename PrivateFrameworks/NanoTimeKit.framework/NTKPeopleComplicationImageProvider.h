
@interface NTKPeopleComplicationImageProvider : CLKImageProvider {
    double  _borderWidth;
    double  _fontSize;
    NSString * _fullName;
    NSString * _nameAbbreviation;
    UIImage * _profileImage;
}

@property double borderWidth;
@property double fontSize;
@property (nonatomic, retain) NSString *fullName;
@property (nonatomic, retain) NSString *nameAbbreviation;
@property (nonatomic, retain) UIImage *profileImage;

- (void).cxx_destruct;
- (double)borderWidth;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)fontSize;
- (id)fullName;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)nameAbbreviation;
- (id)profileImage;
- (void)setBorderWidth:(double)arg1;
- (void)setFontSize:(double)arg1;
- (void)setFullName:(id)arg1;
- (void)setNameAbbreviation:(id)arg1;
- (void)setProfileImage:(id)arg1;

@end
