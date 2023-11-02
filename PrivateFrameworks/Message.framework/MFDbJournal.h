
@interface MFDbJournal : NSObject {
    int  _fd;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
    MFMailboxUid * _mailbox;
    NSString * _path;
}

+ (id)_journalForMailbox:(id)arg1;
+ (void)initialize;
+ (id)legacyJournal;
+ (long long)mergeAllJournalsUsingConnection:(id)arg1;

- (void).cxx_destruct;
- (bool)_markMailboxForReconciliation:(bool)arg1 connection:(id)arg2;
- (int)_processJournalFile:(id)arg1 connection:(id)arg2;
- (void)dealloc;
- (id)initWithMailbox:(id)arg1;
- (long long)mergeUsingConnection:(id)arg1;

@end
