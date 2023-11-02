
@interface EDConversationDailyiCloudExporter : NSObject <EFLoggable> {
    EDUbiquitousConversationManager * _conversationManager;
    <EDConversationDailyCloudExporterDelegate> * _delegate;
}

@property (nonatomic, readonly) EDUbiquitousConversationManager *conversationManager;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <EDConversationDailyCloudExporterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)log;

- (void).cxx_destruct;
- (id)conversationManager;
- (id)delegate;
- (id)initWithDelegate:(id)arg1 conversationManager:(id)arg2;
- (void)run;

@end
