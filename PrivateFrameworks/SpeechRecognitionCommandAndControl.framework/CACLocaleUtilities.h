
@interface CACLocaleUtilities : NSObject

+ (id)_localizedUIStringForKey:(id)arg1 forResource:(id)arg2;
+ (id)_localizedUIStringForKey:(id)arg1 forResource:(id)arg2 locale:(id)arg3;
+ (id)componentsFromLocaleIdentifier:(id)arg1;
+ (id)displayStringForByteSize:(unsigned long long)arg1;
+ (id)displayStringForTimeRemaining:(double)arg1;
+ (bool)isLocaleIdentifier:(id)arg1 containedInLocaleIdentifiers:(id)arg2;
+ (bool)isSameLangaugeFromLocaleIdentifier:(id)arg1 secondLocaleIdentifier:(id)arg2;
+ (bool)isSameLocaleIdentifier:(id)arg1 secondLocaleIdentifier:(id)arg2;
+ (id)localizedDisplayStringForLocaleIdentifier:(id)arg1;
+ (id)localizedUIStringForBuiltinCommandsMiniDescriptionsKey:(id)arg1;
+ (id)localizedUIStringForKey:(id)arg1;
+ (id)normalizedLocaleIdentifier:(id)arg1;
+ (id)siriLocaleUIStringForKey:(id)arg1;
+ (id)systemLocaleIdentifier;
+ (id)systemUILocale;

@end
