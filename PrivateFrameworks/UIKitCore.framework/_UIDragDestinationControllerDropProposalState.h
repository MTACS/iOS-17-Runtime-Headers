
@interface _UIDragDestinationControllerDropProposalState : NSObject {
    bool  _didDrop;
    NSIndexPath * _indexPath;
    UICollectionViewDropProposal * _proposal;
}

@property (nonatomic) bool didDrop;
@property (nonatomic, readonly) NSIndexPath *effectiveIndexPath;
@property (nonatomic, retain) NSIndexPath *indexPath;
@property (nonatomic, retain) UICollectionViewDropProposal *proposal;

- (void).cxx_destruct;
- (bool)_hasDropActionTarget;
- (id)description;
- (bool)didDrop;
- (void)didPerformDrop;
- (id)effectiveIndexPath;
- (id)indexPath;
- (id)init;
- (id)proposal;
- (void)setDidDrop:(bool)arg1;
- (void)setIndexPath:(id)arg1;
- (void)setProposal:(id)arg1;
- (void)updateFromDropProposal:(id)arg1;

@end