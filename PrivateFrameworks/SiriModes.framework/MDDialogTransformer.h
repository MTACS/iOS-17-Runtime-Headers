
@interface MDDialogTransformer : NSObject

+ (id)_addViewsForAddDialogs:(id)arg1 views:(id)arg2;
+ (bool)_alwaysPrintSiriResponse;
+ (id)_analytics;
+ (id)_configurationDictionary;
+ (id)_firstSnippetInViews:(id)arg1;
+ (void)_logModeComputationForAceCommand:(id)arg1 mode:(unsigned long long)arg2;
+ (id)_redundantDUCIds;
+ (id)_removeRedundantUtteranceViewsFromAddViews:(id)arg1 forMode:(unsigned long long)arg2;
+ (id)_removeSpeakableTextFromAddViews:(id)arg1 forMode:(unsigned long long)arg2;
+ (id)_removeUtteranceViewsFromAddViews:(id)arg1 forMode:(unsigned long long)arg2;
+ (id)_sayItForDialog:(id)arg1;
+ (bool)_shouldTransformLegacyAddViews;
+ (id)_speakableTextForDialog:(id)arg1 mode:(unsigned long long)arg2;
+ (id)_transformDialogAddViews:(id)arg1 forMode:(unsigned long long)arg2;
+ (id)_transformLegacyAddViews:(id)arg1 forMode:(unsigned long long)arg2;
+ (unsigned long long)_typeOfAddViews:(id)arg1;
+ (id)_utteranceViewForDialog:(id)arg1 mode:(unsigned long long)arg2 printedOnly:(bool)arg3;
+ (id)dialogIdentifiers;
+ (void)setDialogIdentifiers:(id)arg1;
+ (bool)supportsTransformationForAceCommand:(id)arg1;
+ (id)transformAddDialogs:(id)arg1 forMode:(unsigned long long)arg2;
+ (id)transformAddViews:(id)arg1 forMode:(unsigned long long)arg2;

@end
