
@interface EDConversationDailyCloudExportActivityManager : NSObject <EFLoggable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)log;
+ (void)scheduleWithConversationExportDelegate:(id)arg1 conversationManager:(id)arg2;

@end
