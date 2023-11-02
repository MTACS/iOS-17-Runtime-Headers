
@interface RTIUtilities : NSObject

+ (id)_attributedStringWithoutDefaultAttributes:(id)arg1;
+ (id)_filteredAttributedString:(id)arg1 validAttributes:(id)arg2;
+ (id)customInfoClassesForType:(id)arg1 forClass:(Class)arg2;
+ (id)customInfoDictionary;
+ (void)registerCustomInfoClasses:(id)arg1 forType:(id)arg2 forClass:(Class)arg3;
+ (void)unregisterCustomInfoType:(id)arg1 forClass:(Class)arg2;

@end
