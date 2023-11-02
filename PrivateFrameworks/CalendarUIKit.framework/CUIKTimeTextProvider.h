
@interface CUIKTimeTextProvider : NSObject

+ (id)_applyFont:(id)arg1 toString:(id)arg2 allowSmallCaps:(bool)arg3;
+ (id)_timeAttributedTextWithDate:(id)arg1 calendar:(id)arg2 droppingDesignator:(bool)arg3 designatorRequiresWhitespace:(bool)arg4 smallCapsAllowed:(bool)arg5 retainZeroMinutes:(bool)arg6;
+ (id)timeAttributedTextWithDate:(id)arg1 calendar:(id)arg2;
+ (id)timeAttributedTextWithDate:(id)arg1 calendar:(id)arg2 font:(id)arg3 options:(long long)arg4;

@end
