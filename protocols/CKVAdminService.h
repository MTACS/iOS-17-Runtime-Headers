
@protocol CKVAdminService

@required

- (oneway void)beginEvaluation:(void *)arg1 clean:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: KVProfile *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (oneway void)captureVocabularySnapshot:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSURL *, void*
- (oneway void)deleteAllItemsWithUserId:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (oneway void)deleteAllItemsWithUserId:(void *)arg1 deviceId:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (oneway void)endEvaluation:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (oneway void)fetchLocalItemsBatchWithSize:(void *)arg1 offset:(void *)arg2 usingBlock:(void *)arg3; // needs 3 arg types, found 9: unsigned long long, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSArray *, void*
- (oneway void)findProfileSnapshotsNearDate:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSArray *, void*
- (oneway void)finishEventSimulation:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (oneway void)handleTask:(void *)arg1 reason:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: unsigned short, unsigned short, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (oneway void)rebuildSpeechProfileForUserId:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (oneway void)startEventSimulation:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (oneway void)triggerMaintenance:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (oneway void)triggerMigration:(void *)arg1 completeAfterTrigger:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*

@end
