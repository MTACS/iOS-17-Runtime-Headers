
@interface PFSharingUtilities : NSObject

+ (id)_dateFormatterTemplate;
+ (id)_exifDateTimeFormatter;
+ (id)_exifSubsecTimeFormatter;
+ (id)_gpsDateFormatter;
+ (id)_gpsTimeFormatter;
+ (id)addAccessibilityDescription:(id)arg1 toAVMetadata:(id)arg2;
+ (id)addCreationDate:(id)arg1 toExifDictionary:(id)arg2;
+ (id)addCreationDate:(id)arg1 toTIFFDictionary:(id)arg2;
+ (id)addCustomDate:(id)arg1 toAVMetadata:(id)arg2;
+ (id)addCustomLocation:(id)arg1 toAVMetadata:(id)arg2;
+ (id)addDescription:(id)arg1 toAVMetadata:(id)arg2;
+ (id)exifDateTimeFromDate:(id)arg1;
+ (id)exifSubsecTimeFromDate:(id)arg1;
+ (id)gpsDictionaryForLocation:(id)arg1;
+ (id)setString:(id)arg1 forKey:(id)arg2 inKeySpace:(id)arg3 inAVMetadata:(id)arg4;

@end
