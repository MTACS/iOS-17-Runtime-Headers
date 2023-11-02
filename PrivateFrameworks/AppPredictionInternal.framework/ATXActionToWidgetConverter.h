
@interface ATXActionToWidgetConverter : NSObject {
    bool  _allowsSendMessageIntentConversion;
    ATXWidgetDescriptorCache * _descriptorCache;
    ATXEngagementRecordManager * _engagementRecordManager;
    ATXHomeScreenConfigCache * _homeScreenConfigCache;
    NSArray * _homeScreenPages;
    ATXInfoToBlendingConfidenceMapper * _infoConfidenceMapper;
    ATXIntentMetadataCache * _intentMetadataCache;
    LNMetadataProvider * _metadataProvider;
}

+ (bool)isWidgetIntent:(id)arg1 validConversionFromActionIntent:(id)arg2;

- (void).cxx_destruct;
- (id)_convertedSuggestionFromInfoSuggestion:(id)arg1 originalSuggestion:(id)arg2;
- (id)_infoSuggestionForAction:(id)arg1;
- (id)_infoSuggestionForLinkActionContainer:(id)arg1;
- (id)_peopleInfoSuggestionForSendMessageIntent:(id)arg1 action:(id)arg2;
- (id)_selectPersonIntentForSendMessageIntent:(id)arg1;
- (id)_widgetForIntent:(id)arg1;
- (id)convertSuggestions:(id)arg1;
- (id)init;
- (id)initWithAllowsSendMessageIntentConversion:(bool)arg1;
- (id)initWithIntentMetadataCache:(id)arg1 widgetDescriptorCache:(id)arg2 infoConfidenceMapper:(id)arg3 engagementRecordManager:(id)arg4 metadataProvider:(id)arg5 allowsSendMessageIntentConversion:(bool)arg6;

@end
