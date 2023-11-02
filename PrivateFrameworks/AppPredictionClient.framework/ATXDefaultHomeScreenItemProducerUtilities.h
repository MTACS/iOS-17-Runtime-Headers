
@interface ATXDefaultHomeScreenItemProducerUtilities : NSObject

+ (id)_defaultWidgetStackFromSmallStack:(id)arg1 mediumStack:(id)arg2 largeStack:(id)arg3 extraLargeStack:(id)arg4 suggestedSize:(unsigned long long)arg5 maxWidgetsPerStack:(unsigned long long)arg6 isiPad:(bool)arg7;
+ (bool)_isSpecialAvocadoDescriptor:(id)arg1;
+ (id)_specialAvocadoKindsConvertingFromAssetsString:(id)arg1;
+ (unsigned long long)_supportedSizeClassesForSpecialAvocadoKind:(id)arg1;
+ (unsigned long long)_widgetFamilyMaskForStackLayoutSize:(unsigned long long)arg1;
+ (id)defaultWidgetStackFromSmallStack:(id)arg1 mediumStack:(id)arg2 largeStack:(id)arg3 extraLargeStack:(id)arg4 suggestedSize:(unsigned long long)arg5 maxWidgetsPerStack:(unsigned long long)arg6 isiPad:(bool)arg7;
+ (id)personalitiesFromAssetsWithKey:(id)arg1;
+ (id)specialWidgetDescriptorForPersonality:(id)arg1 size:(unsigned long long)arg2;
+ (id)splitDescriptorsIntoFirstPartyAndThirdParty:(id)arg1;
+ (id)stackFromDefaultStackPersonalities:(id)arg1 suggestedSize:(unsigned long long)arg2 maxWidgetsPerStack:(unsigned long long)arg3 personalityToDescriptorDictionary:(id)arg4 isiPad:(bool)arg5;
+ (id)widget:(id)arg1 filteredForSize:(unsigned long long)arg2;
+ (id)widgetDescriptorFromChronoDescriptor:(id)arg1 appBundleId:(id)arg2 rankType:(long long)arg3;
+ (id)widgetFromPersonality:(id)arg1 size:(unsigned long long)arg2 personalityToDescriptorDictionary:(id)arg3;
+ (id)widgets:(id)arg1 filteredForSize:(unsigned long long)arg2;
+ (id)widgetsFromPersonalities:(id)arg1 size:(unsigned long long)arg2 personalityToDescriptorDictionary:(id)arg3;

@end
