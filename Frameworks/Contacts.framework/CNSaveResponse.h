
@interface CNSaveResponse : NSObject <NSSecureCoding> {
    NSMutableDictionary * _contactSnapshotsByIndexPath;
    NSMutableDictionary * _containerSnapshotsByIndexPath;
    bool  _didAffectMeCard;
    NSMutableDictionary * _groupSnapshotsByIndexPath;
}

@property (readonly) bool didAffectMeCard;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)applySnapshotsToSaveRequest:(id)arg1;
- (bool)didAffectMeCard;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
