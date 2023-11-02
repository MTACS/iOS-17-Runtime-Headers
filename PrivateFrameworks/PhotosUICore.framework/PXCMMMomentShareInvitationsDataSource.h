
@interface PXCMMMomentShareInvitationsDataSource : PXCMMInvitationsDataSource {
    PXCMMMomentShareInvitationsDataSourceState * _state;
}

@property (nonatomic, readonly) PXCMMMomentShareInvitationsDataSourceState *state;

+ (id)new;

- (void).cxx_destruct;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })indexPathForObjectReference:(id)arg1;
- (id)init;
- (id)initWithState:(id)arg1;
- (id)invitationAtItemIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (id)invitationForObjectID:(id)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (id)objectIDAtItemIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (id)state;

@end
