
@interface SyncedModels.SyncedModelController : _TtCs12_SwiftObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _authorityParticipant;
    void _manager;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _ownerUUID;
    void _ownerUUIDsToParticipants;
    void _ownershipCounter;
    void _ownershipRequestHandler;
    void _ownershipRequestsAwaitingHandoffReply;
    void _ownershipRequestsAwaitingReply;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _ownershipUUID;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _pendingOwnershipRequest;
    void _properties;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _transaction;
    void _type;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _uuid;
    void cancellables;
    void ownershipChangedHandler;
    void status;
    void transactionLock;
}

@end
