
@interface WFRemoteExecutionFileCoordinator : NSObject {
    NSHashTable * _waitingArchivers;
    NSMutableDictionary * _waitingFiles;
}

@property (nonatomic, retain) NSHashTable *waitingArchivers;
@property (nonatomic, retain) NSMutableDictionary *waitingFiles;

- (void).cxx_destruct;
- (void)handleFile:(id)arg1 withIdentifier:(id)arg2;
- (id)init;
- (void)registerArchiver:(id)arg1;
- (void)setWaitingArchivers:(id)arg1;
- (void)setWaitingFiles:(id)arg1;
- (id)waitingArchivers;
- (id)waitingFiles;

@end
