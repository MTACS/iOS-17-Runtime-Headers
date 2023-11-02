
@interface PFImageMetadataBuilder : PFMetadataBuilder {
    NSMutableDictionary * _exifMutableDictionary;
    NSMutableDictionary * _iptcMutableDictionary;
    NSMutableDictionary * _tiffMutableDictionary;
}

@property (nonatomic, readonly, copy) NSDictionary *exifDictionary;
@property (nonatomic, retain) NSMutableDictionary *exifMutableDictionary;
@property (nonatomic, readonly, copy) NSDictionary *iptcDictionary;
@property (nonatomic, retain) NSMutableDictionary *iptcMutableDictionary;
@property (nonatomic, readonly, copy) NSDictionary *tiffDictionary;
@property (nonatomic, retain) NSMutableDictionary *tiffMutableDictionary;

+ (id)_dateFormatterTemplate;
+ (id)_exifDateTimeFormatter;
+ (id)_exifSubsecTimeFormatter;
+ (id)_exifTimeZoneOffsetFormatter;
+ (id)_gpsDateFormatter;
+ (id)_gpsTimeFormatter;
+ (id)iptcDateFormatter;
+ (id)iptcTimeFormatter;

- (void).cxx_destruct;
- (void)_updateCreationDate;
- (id)exifDictionary;
- (id)exifMutableDictionary;
- (id)init;
- (id)iptcDictionary;
- (id)iptcMutableDictionary;
- (void)setAccessibilityDescription:(id)arg1;
- (void)setCaption:(id)arg1;
- (void)setCreationDate:(id)arg1 timeZone:(id)arg2;
- (void)setExifMutableDictionary:(id)arg1;
- (void)setIptcMutableDictionary:(id)arg1;
- (void)setKeywords:(id)arg1;
- (void)setPeopleNames:(id)arg1;
- (void)setTiffMutableDictionary:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)tiffDictionary;
- (id)tiffMutableDictionary;

@end
