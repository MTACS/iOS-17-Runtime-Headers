
@interface EDConversationPruningActivityManager : NSObject <EFLoggable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)log;
+ (void)scheduleWithConversationManager:(id)arg1;

@end
