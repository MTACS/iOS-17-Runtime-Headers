
@interface CPPointOfInterest : NSObject <NSSecureCoding> {
    NSString * _detailSubtitle;
    NSString * _detailSummary;
    NSString * _detailTitle;
    NSUUID * _identifier;
    MKMapItem * _location;
    CPImageSet * _pinImageSet;
    CPTextButton * _primaryButton;
    CPTextButton * _secondaryButton;
    CPImageSet * _selectedPinImageSet;
    NSString * _subtitle;
    NSString * _summary;
    NSString * _title;
    id  _userInfo;
}

@property (nonatomic, copy) NSString *detailSubtitle;
@property (nonatomic, copy) NSString *detailSummary;
@property (nonatomic, copy) NSString *detailTitle;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, retain) MKMapItem *location;
@property (nonatomic, retain) UIImage *pinImage;
@property (nonatomic, retain) CPImageSet *pinImageSet;
@property (nonatomic, retain) CPTextButton *primaryButton;
@property (nonatomic, retain) CPTextButton *secondaryButton;
@property (nonatomic, retain) UIImage *selectedPinImage;
@property (nonatomic, retain) CPImageSet *selectedPinImageSet;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *summary;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) id userInfo;

+ (struct CGSize { double x1; double x2; })pinImageSize;
+ (struct CGSize { double x1; double x2; })selectedPinImageSize;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)detailSubtitle;
- (id)detailSummary;
- (id)detailTitle;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocation:(id)arg1 title:(id)arg2 subtitle:(id)arg3 summary:(id)arg4 detailTitle:(id)arg5 detailSubtitle:(id)arg6 detailSummary:(id)arg7 pinImage:(id)arg8;
- (id)initWithLocation:(id)arg1 title:(id)arg2 subtitle:(id)arg3 summary:(id)arg4 detailTitle:(id)arg5 detailSubtitle:(id)arg6 detailSummary:(id)arg7 pinImage:(id)arg8 selectedPinImage:(id)arg9;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPointOfInterest:(id)arg1;
- (id)location;
- (id)pinImage;
- (id)pinImageSet;
- (id)primaryButton;
- (id)secondaryButton;
- (id)selectedPinImage;
- (id)selectedPinImageSet;
- (void)setDetailSubtitle:(id)arg1;
- (void)setDetailSummary:(id)arg1;
- (void)setDetailTitle:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setPinImage:(id)arg1;
- (void)setPinImageSet:(id)arg1;
- (void)setPrimaryButton:(id)arg1;
- (void)setSecondaryButton:(id)arg1;
- (void)setSelectedPinImage:(id)arg1;
- (void)setSelectedPinImageSet:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSummary:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)subtitle;
- (id)summary;
- (id)title;
- (id)userInfo;

@end
