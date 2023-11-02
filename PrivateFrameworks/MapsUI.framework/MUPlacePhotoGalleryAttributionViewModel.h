
@interface MUPlacePhotoGalleryAttributionViewModel : NSObject {
    long long  _accessoryStyle;
    long long  _attributionType;
    NSString * _authorName;
    NSString * _caption;
    NSDate * _photoDate;
    NSString * _placeName;
    NSString * _subtitleText;
    bool  _supportsPunchOut;
    NSString * _titleText;
    NSString * _vendorName;
}

@property (nonatomic) long long accessoryStyle;
@property (nonatomic) long long attributionType;
@property (nonatomic, retain) NSString *authorName;
@property (nonatomic, retain) NSString *caption;
@property (nonatomic, retain) NSDate *photoDate;
@property (nonatomic, retain) NSString *placeName;
@property (nonatomic, retain) NSString *subtitleText;
@property (nonatomic) bool supportsPunchOut;
@property (nonatomic, retain) NSString *titleText;
@property (nonatomic, retain) NSString *vendorName;

+ (id)viewModelForCustomTitle:(id)arg1 customSubtitle:(id)arg2;
+ (id)viewModelFromMapItem:(id)arg1 photo:(id)arg2 photoCreditName:(id)arg3 shouldAddPhotoCredit:(bool)arg4;

- (void).cxx_destruct;
- (long long)accessoryStyle;
- (long long)attributionType;
- (id)authorName;
- (id)caption;
- (id)photoDate;
- (id)placeName;
- (void)setAccessoryStyle:(long long)arg1;
- (void)setAttributionType:(long long)arg1;
- (void)setAuthorName:(id)arg1;
- (void)setCaption:(id)arg1;
- (void)setPhotoDate:(id)arg1;
- (void)setPlaceName:(id)arg1;
- (void)setSubtitleText:(id)arg1;
- (void)setSupportsPunchOut:(bool)arg1;
- (void)setTitleText:(id)arg1;
- (void)setVendorName:(id)arg1;
- (id)subtitleText;
- (bool)supportsPunchOut;
- (id)titleText;
- (id)vendorName;

@end
