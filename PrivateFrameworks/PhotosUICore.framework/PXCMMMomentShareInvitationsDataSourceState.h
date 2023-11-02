
@interface PXCMMMomentShareInvitationsDataSourceState : NSObject <NSCopying> {
    NSDictionary * _invitationsByMomentShareObjectID;
    PHFetchResult * _momentShares;
}

@property (nonatomic, readonly) NSDictionary *invitationsByMomentShareObjectID;
@property (nonatomic, readonly) PHFetchResult *momentShares;

+ (id)new;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithMomentShares:(id)arg1 invitationsByMomentShareObjectID:(id)arg2;
- (id)invitationsByMomentShareObjectID;
- (id)momentShares;
- (id)stateUpdatedWithChange:(id)arg1 changeDetails:(id*)arg2;

@end
