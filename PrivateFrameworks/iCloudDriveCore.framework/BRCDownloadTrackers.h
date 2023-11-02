
@interface BRCDownloadTrackers : NSObject {
    NSMapTable * _fileObjectIDsByTracker;
    BRCAccountSession * _session;
    NSMutableDictionary * _trackersByFileObjectID;
}

@property (nonatomic, readonly) BRCAccountSession *session;

- (void).cxx_destruct;
- (void)addDownloadTracker:(id)arg1 forFileObjectID:(id)arg2 withEtagIfLoser:(id)arg3;
- (void)document:(id)arg1 didCompleteDownloadWithError:(id)arg2;
- (bool)hasPendingTrackerForFileObjectID:(id)arg1;
- (id)initWithSession:(id)arg1;
- (void)removeDownloadTracker:(id)arg1;
- (id)session;
- (unsigned long long)spaceRequiredForTrackers;
- (id)trackedFileObjectIDs;

@end
