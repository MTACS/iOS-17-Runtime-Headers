
@interface NewsUI2.ShortcutService : NSObject <FCShortcutListObserving, FCSubscriptionObserving> {
    void configurationManager;
    void featureAvailability;
    void lock;
    void observers;
    void shortcutList;
    void subscriptionController;
    void tagService;
    void unsafeOrderedShortcuts;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)shortcutList:(id)arg1 didAddShortcuts:(id)arg2 changedShortcuts:(id)arg3 removedShortcuts:(id)arg4;
- (void)subscriptionController:(id)arg1 didAddTags:(id)arg2 changeTags:(id)arg3 moveTags:(id)arg4 removeTags:(id)arg5 subscriptionType:(unsigned long long)arg6;

@end
