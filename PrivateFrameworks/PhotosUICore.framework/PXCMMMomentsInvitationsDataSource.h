
@interface PXCMMMomentsInvitationsDataSource : PXCMMInvitationsDataSource {
    PXCMMMomentsInvitationsDataSourceState * __state;
}

@property (nonatomic, readonly) PXCMMMomentsInvitationsDataSourceState *_state;

- (void).cxx_destruct;
- (id)_state;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })indexPathForObjectReference:(id)arg1;
- (id)initWithState:(id)arg1;
- (id)invitationAtItemIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (id)invitationForObjectID:(id)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (id)objectIDAtItemIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;

@end
