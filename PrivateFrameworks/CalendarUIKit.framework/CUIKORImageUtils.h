
@interface CUIKORImageUtils : NSObject

+ (id)_calendarColorDotImageForColor:(id)arg1 baseSize:(double)arg2 font:(id)arg3;
+ (id)_calendarColorDotImageForColor:(id)arg1 diameter:(double)arg2;
+ (id)_calendarColorDotImageForColor:(id)arg1 diameter:(double)arg2 enabled:(bool)arg3 adjustWhiteColor:(bool)arg4;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_edgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 scaledByFont:(id)arg2;
+ (unsigned long long)_uniqueDotHashForColor:(id)arg1 diameter:(double)arg2;
+ (double)colorBarThickness;
+ (id)scaledCalendarInvitationDotForFont:(id)arg1;
+ (id)scaledNewTimeProposedDotForFont:(id)arg1;

@end
