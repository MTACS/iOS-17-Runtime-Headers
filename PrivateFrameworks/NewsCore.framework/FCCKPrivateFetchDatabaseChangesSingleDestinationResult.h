
@interface FCCKPrivateFetchDatabaseChangesSingleDestinationResult : NSObject {
    NSArray * _changedZoneIDs;
    NSArray * _deletedZoneIDs;
    long long  _destination;
    NSError * _error;
    bool  _moreComing;
    CKServerChangeToken * _serverChangeToken;
}

@property (nonatomic, retain) NSArray *changedZoneIDs;
@property (nonatomic, retain) NSArray *deletedZoneIDs;
@property (nonatomic) long long destination;
@property (nonatomic, retain) NSError *error;
@property (nonatomic) bool moreComing;
@property (nonatomic, retain) CKServerChangeToken *serverChangeToken;

- (void).cxx_destruct;
- (id)changedZoneIDs;
- (id)deletedZoneIDs;
- (long long)destination;
- (id)error;
- (bool)moreComing;
- (id)serverChangeToken;
- (void)setChangedZoneIDs:(id)arg1;
- (void)setDeletedZoneIDs:(id)arg1;
- (void)setDestination:(long long)arg1;
- (void)setError:(id)arg1;
- (void)setMoreComing:(bool)arg1;
- (void)setServerChangeToken:(id)arg1;

@end
