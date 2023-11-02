
@interface BKLocalization : NSObject

+ (id)getLocalizedString:(id)arg1;
+ (id)getLocalizedString:(id)arg1 fromFile:(id)arg2;
+ (id)getLocalizedString:(id)arg1 fromStringTable:(id)arg2 withBundle:(id)arg3;
+ (id)getLocalizedStringOrNil:(id)arg1 fromStringTable:(id)arg2 withBundle:(id)arg3;
+ (void)reportLocalizationABC;

@end
