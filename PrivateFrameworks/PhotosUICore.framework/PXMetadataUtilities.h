
@interface PXMetadataUtilities : NSObject

+ (id)_accessibilityDescriptionForFileType:(unsigned long long)arg1;
+ (id)_apertureStringFromString:(id)arg1;
+ (id)_fileTypeImageForType:(unsigned long long)arg1;
+ (id)_focalLengthFromString:(id)arg1;
+ (id)_focalLengthStringFromString:(id)arg1;
+ (id)_formattedApertureStringWithString:(id)arg1;
+ (id)_formattedDeviceDescriptionForItem:(id)arg1;
+ (id)_formattedLensDescriptionForItem:(id)arg1;
+ (id)_loadImageWithName:(id)arg1;
+ (id)_loadImageWithSystemName:(id)arg1;
+ (id)cameraCaptureDeviceDisplayStringForItem:(id)arg1;
+ (id)cameraSettingsDisplayStringsForItem:(id)arg1;
+ (id)cameraSettingsForItem:(id)arg1;
+ (unsigned long long)codecTypeForItem:(id)arg1;
+ (unsigned long long)fileTypeForItem:(id)arg1;
+ (unsigned long long)fileTypeForItem:(id)arg1 type:(unsigned long long)arg2;
+ (id)fileTypeImageForType:(unsigned long long)arg1;
+ (id)flashImageForType:(unsigned long long)arg1;
+ (unsigned long long)flashTypeForItem:(id)arg1;
+ (id)hardwareDisplayStringsForItem:(id)arg1;
+ (id)localizedFileFormatForItem:(id)arg1;
+ (id)megaPixelsDisplayStringForItem:(id)arg1 isAccessibility:(bool)arg2;
+ (id)meteringModeImageForType:(unsigned long long)arg1;
+ (unsigned long long)meteringModeTypeForItem:(id)arg1;
+ (id)originalCreationDateForItem:(id)arg1;
+ (id)originalLocationForItem:(id)arg1;
+ (id)originalTimeZoneForItem:(id)arg1;
+ (void)processExifMetadataForItem:(id)arg1 resultHandler:(id /* block */)arg2 callbackQueue:(id)arg3;
+ (void)requestExifMetadataProcessingIfNeededForItem:(id)arg1 onProcessingQueue:(id)arg2 withResultHandler:(id /* block */)arg3;
+ (id)resolutionDisplayStringForItem:(id)arg1 isAccessibility:(bool)arg2;
+ (id)semanticStylesDisplayStringForItem:(id)arg1;
+ (id)symbolSystemNamesForItem:(id)arg1;
+ (id)whiteBalanceImageForType:(unsigned long long)arg1;
+ (unsigned long long)whiteBalanceTypeForItem:(id)arg1;

@end
