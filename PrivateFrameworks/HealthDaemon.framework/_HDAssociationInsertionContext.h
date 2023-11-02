
@interface _HDAssociationInsertionContext : NSObject {
    bool  _enforceSameSource;
    NSUUID * _parentUUID;
    bool  _permitPendingAssociations;
    HDProfile * _profile;
    HDDatabaseTransaction * _transaction;
}

- (void).cxx_destruct;

@end
