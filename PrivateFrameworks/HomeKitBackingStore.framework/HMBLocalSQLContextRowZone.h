
@interface HMBLocalSQLContextRowZone : HMFObject {
    <HMBLocalZoneID> * _identifier;
    NSUUID * _replication;
    unsigned long long  _zoneRow;
}

@property (nonatomic, retain) <HMBLocalZoneID> *identifier;
@property (nonatomic, retain) NSUUID *replication;
@property (nonatomic) unsigned long long zoneRow;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)identifier;
- (id)init;
- (id)initWithZoneRow:(unsigned long long)arg1;
- (id)initWithZoneRow:(unsigned long long)arg1 name:(id)arg2 token:(id)arg3;
- (id)replication;
- (void)setIdentifier:(id)arg1;
- (void)setReplication:(id)arg1;
- (void)setZoneRow:(unsigned long long)arg1;
- (unsigned long long)zoneRow;

@end
