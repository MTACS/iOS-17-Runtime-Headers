
@interface CUIKTextProviderUtils : NSObject

+ (bool)designatorRequiresWhitespace;
+ (bool)dropLeftRedundantDesignator;
+ (bool)smallCapsAllowed;
+ (id)timeFormatByRemovingWhitespaceAroundDesignatorOfTimeFormat:(id)arg1 designatorRequiresWhitespace:(bool)arg2;

@end
