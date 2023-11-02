
@interface GroupKitCrypto.Group : _TtCs12_SwiftObject {
    void currentSerializedGroupBlob;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  groupDataThatNeedsValidation;
    void groupID;
    void maybeAdminSeed;
    void member;
    void memberKeyOffset;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  memberKeyingMaterial;
    void memberRole;
    void memberSeed;
    void membership;
    void newGroup;
    void newInvites;
    void newMembershipVerifiers;
    void seedBlobsThatNeedValidation;
    void seedValidationForNewGroup;
    void state;
    void version;
}

@end
