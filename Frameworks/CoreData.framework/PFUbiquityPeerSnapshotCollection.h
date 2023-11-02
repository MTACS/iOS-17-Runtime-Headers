
@interface PFUbiquityPeerSnapshotCollection : NSObject {
    NSMutableDictionary * _kvToSnapshot;
    bool  _needSort;
    NSMutableDictionary * _peerIDToTranasctionNumberToKnowledgeVector;
    NSMutableDictionary * _peerIDToTransactionNumberToSnapshot;
    NSMutableArray * _peerSnapshots;
}

- (void)dealloc;
- (id)init;

@end
