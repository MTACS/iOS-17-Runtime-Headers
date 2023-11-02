
@interface _CDSpotlightItemUtils : NSObject

+ (id)_calendarDomainIdentifierForDomainIdentifier:(id)arg1;
+ (id)_locationMetadataForSearchableItem:(id)arg1 userAction:(id)arg2;
+ (bool)contentTypeTree:(id)arg1 conformsToUTIType:(id)arg2;
+ (id)contextDictionaryForSearchableItem:(id)arg1 userAction:(id)arg2;
+ (id)expectedSupportedUTIs;
+ (id)expectedUTIsForMechanism:(long long)arg1;
+ (long long)getInteractionMechanismForContentUTI:(id)arg1 typeTree:(id)arg2;
+ (id)interactionForSearchableItem:(id)arg1 nsUserName:(id)arg2;
+ (id)interactionUUIDForSearchableItemWithUID:(id)arg1 bundleID:(id)arg2;
+ (id)knowledgeEventsForSearchableItem:(id)arg1 userAction:(id)arg2;
+ (id)messageContextDictionaryForSendMessageIntent:(id)arg1;
+ (id)querySpotlightItemsWithStartDate:(id)arg1 endDate:(id)arg2 getMail:(bool)arg3 getMessages:(bool)arg4;

@end
