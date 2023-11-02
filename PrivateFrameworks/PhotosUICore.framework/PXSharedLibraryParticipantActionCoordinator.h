
@interface PXSharedLibraryParticipantActionCoordinator : NSObject {
    UIViewController * _actionViewController;
    <PXSharedLibraryParticipant> * _participant;
    <PXSharedLibrary> * _sharedLibrary;
}

@property (nonatomic, readonly) UIViewController *actionViewController;
@property (nonatomic, readonly) <PXSharedLibraryParticipant> *participant;

- (void).cxx_destruct;
- (void)_removeParticipant:(id)arg1;
- (void)_resendInvitation:(id)arg1;
- (id)actionViewController;
- (id)initWithParticipant:(id)arg1 sharedLibrary:(id)arg2;
- (id)participant;

@end
