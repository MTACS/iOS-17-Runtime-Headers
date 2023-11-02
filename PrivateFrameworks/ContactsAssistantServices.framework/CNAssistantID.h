
@interface CNAssistantID : NSObject

+ (id)assistantIDFromContact:(id)arg1;
+ (id)assistantIDFromContactID:(id)arg1;
+ (id)assistantIDFromContainer:(id)arg1;
+ (id)assistantIDFromExternalIdentifier:(id)arg1;
+ (id)assistantIDFromGroup:(id)arg1;
+ (id)assistantIDOfType:(id)arg1 recordID:(int)arg2 databaseID:(id)arg3 identifier:(id)arg4;
+ (id)contactIDFromAssistantID:(id)arg1;
+ (id)containerIDFromAssistantID:(id)arg1;
+ (id)databaseID;
+ (id)externalIdentifierFromAssistantID:(id)arg1;
+ (id)groupIDFromAssistantID:(id)arg1;

@end
