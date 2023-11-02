
@interface MGOutstandingQuery : NSObject {
    NSUUID * _identifier;
    NSPredicate * _predicate;
    bool  _requiresTopology;
}

@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly, copy) NSPredicate *predicate;
@property (nonatomic, readonly) bool requiresTopology;

- (void).cxx_destruct;
- (id)identifier;
- (id)initWithPredicate:(id)arg1;
- (id)predicate;
- (bool)requiresTopology;

@end
