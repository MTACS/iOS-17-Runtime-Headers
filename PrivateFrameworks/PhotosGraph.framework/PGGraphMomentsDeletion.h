
@interface PGGraphMomentsDeletion : PGGraphChange {
    NSSet * _momentUUIDs;
}

@property (nonatomic, readonly) NSSet *momentUUIDs;

- (void).cxx_destruct;
- (unsigned long long)changeCount;
- (id)description;
- (id)initWithMomentUUIDs:(id)arg1;
- (id)momentUUIDs;
- (unsigned long long)type;

@end
