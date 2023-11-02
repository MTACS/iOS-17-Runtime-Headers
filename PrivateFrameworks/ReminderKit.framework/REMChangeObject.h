
@interface REMChangeObject : NSObject <NSCopying, NSSecureCoding, REMChangeCoalesceable> {
    long long  _changeID;
    long long  _changeType;
    REMObjectID * _changedObjectID;
    REMChangeTombstone * _tombstone;
    REMChangeTransaction * _transaction;
}

@property (nonatomic, readonly) long long changeID;
@property (nonatomic, readonly) long long changeType;
@property (nonatomic, readonly) REMObjectID *changedObjectID;
@property (nonatomic, readonly) REMChangeTombstone *tombstone;
@property (nonatomic, readonly) REMChangeTransaction *transaction;
@property (nonatomic, readonly) NSSet *updatedProperties;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)changeID;
- (long long)changeType;
- (id)changedObjectID;
- (id)coalescedChanges;
- (id)copyForCoalescing;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isCoalesced;
- (bool)isEqual:(id)arg1;
- (id)tombstone;
- (id)transaction;
- (id)updatedProperties;

@end
