
@interface BLTSectionInfoSyncCoordinator : NSObject {
    NSMutableArray * _alertingSectionIDs;
    NSMutableDictionary * _alertingSectionState;
    id /* block */  _infoProvider;
    unsigned long long  _mostRecentIndex;
    unsigned long long  _mostRecentIndexSinceSync;
    unsigned long long  _stateHandler;
}

@property (nonatomic, retain) NSMutableArray *alertingSectionIDs;
@property (nonatomic, retain) NSMutableDictionary *alertingSectionState;
@property (nonatomic, copy) id /* block */ infoProvider;
@property (nonatomic) unsigned long long mostRecentIndex;
@property (nonatomic) unsigned long long mostRecentIndexSinceSync;

- (void).cxx_destruct;
- (id)alertingSectionIDs;
- (id)alertingSectionState;
- (void)dealloc;
- (id)description;
- (id)effectiveSectionInfoForSectionIDIndex:(unsigned long long)arg1;
- (id /* block */)infoProvider;
- (id)initWithAlertingSectionIDs:(id)arg1 infoProvider:(id /* block */)arg2;
- (unsigned long long)mostRecentIndex;
- (unsigned long long)mostRecentIndexSinceSync;
- (unsigned long long)performSyncForSectionID:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (void)sectionInfoSendCompleted:(unsigned long long)arg1;
- (void)setAlertingSectionIDs:(id)arg1;
- (void)setAlertingSectionState:(id)arg1;
- (void)setInfoProvider:(id /* block */)arg1;
- (void)setMostRecentIndex:(unsigned long long)arg1;
- (void)setMostRecentIndexSinceSync:(unsigned long long)arg1;

@end
