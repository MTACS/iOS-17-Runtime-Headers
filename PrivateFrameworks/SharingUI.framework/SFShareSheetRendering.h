
@interface SFShareSheetRendering : NSObject

+ (long long)_hostIdiomFromConfig:(id)arg1;
+ (id)_nearbyBadgeFontForIdiom:(long long)arg1;
+ (double)_nearbyBadgeNumberStringTopInsetForIdiom:(long long)arg1;
+ (double)_normalCellWidthForIdiom:(long long)arg1;
+ (id)badgeNumberFormatterFromConfig:(id)arg1;
+ (id)cappedOrthoLabelFontFromConfig:(id)arg1;
+ (struct CGImage { }*)createCGImageForRenderingCommand:(id)arg1;
+ (id)drawingCommandsForActionPlatterWithTitle:(id)arg1 tintColor:(id)arg2 hostConfig:(id)arg3;
+ (id)drawingCommandsForMoreListEntryTitle:(id)arg1 labelColor:(id)arg2 hostConfig:(id)arg3;
+ (id)drawingCommandsForNameLabelWithString:(id)arg1 textColor:(id)arg2 maxNumberOfLines:(unsigned long long)arg3 isAirDrop:(bool)arg4 ignoreNameWrapping:(bool)arg5 hostConfig:(id)arg6;
+ (id)drawingCommandsForNearbyBadgeWithCount:(long long)arg1 hostConfig:(id)arg2;
+ (id)drawingCommandsForUIActivityTitle:(id)arg1 foregroundColor:(id)arg2 hostConfig:(id)arg3;
+ (long long)hostNaturalTextAlignmentFromConfig:(id)arg1;
+ (bool)isAXFromConfig:(id)arg1;
+ (double)morePlatterMaxWidthFromConfig:(id)arg1;
+ (struct CGSize { double x1; double x2; })nameLabelSizeFromConfig:(id)arg1;
+ (double)platterMaxWidthFromConfig:(id)arg1;

@end
