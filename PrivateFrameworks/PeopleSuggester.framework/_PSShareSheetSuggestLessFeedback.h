
@interface _PSShareSheetSuggestLessFeedback : NSObject {
    NSString * _bundleId;
    NSString * _contactId;
    NSString * _conversationId;
    NSString * _derivedIntentId;
    NSString * _handle;
}

@property (nonatomic, readonly, copy) NSString *bundleId;
@property (nonatomic, readonly, copy) NSString *contactId;
@property (nonatomic, readonly, copy) NSString *conversationId;
@property (nonatomic, readonly, copy) NSString *derivedIntentId;
@property (nonatomic, readonly, copy) NSString *handle;

- (void).cxx_destruct;
- (id)bundleId;
- (id)contactId;
- (id)conversationId;
- (id)derivedIntentId;
- (id)handle;
- (id)initWithBundleId:(id)arg1 conversationId:(id)arg2 derivedIntentId:(id)arg3 handle:(id)arg4 contactId:(id)arg5;
- (id)initWithBundleId:(id)arg1 conversationId:(id)arg2 handle:(id)arg3 contactId:(id)arg4;
- (id)knowledgeEvent;

@end
