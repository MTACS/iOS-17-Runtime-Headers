
@interface DocumentUnderstandingClient.DocumentUnderstandingFeatureFlagReader : NSObject

+ (bool)isAutonamingFromMessagesEnabled;
+ (bool)isBackboneModelEnabled;
+ (bool)isCategoryClassificationModelEnabled;
+ (bool)isFoundInModelsEnabled;
+ (bool)isIndexNonfileDocumentsEnabled;
+ (bool)isSearchAndOrganizationDocumentIngestEnabled;
+ (bool)isTopicClassificationModelEnabled;

- (id)init;

@end
