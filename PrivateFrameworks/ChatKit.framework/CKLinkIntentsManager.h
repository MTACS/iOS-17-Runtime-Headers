
@interface CKLinkIntentsManager : NSObject {
    void chatController;
    void messagesNavigator;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)init;
- (void)purgeDependencies;
- (void)registerChatController:(id)arg1;
- (void)registerDependencyWithDetailsController:(id)arg1;
- (void)registerMessagesNavigator:(id)arg1;

@end
