
@interface IMDCollaborationNoticeStore : NSObject {
    void $__lazy_storage_$_persistenceContainer;
}

- (void).cxx_destruct;
- (id)deleteAllNoticesWithCollaborationIdentifier:(id)arg1;
- (id)deleteNotice:(id)arg1;
- (id)deleteNoticeWithGUIDString:(id)arg1;
- (void)deleteNoticesForURLs:(id)arg1;
- (id)init;
- (id)noticesForURLs:(id)arg1;
- (void)saveNotice:(id)arg1;

@end
