
@interface PGGraphMomentsInsertion : PGGraphChange {
    NSSet * _momentUUIDs;
    NSSet * _moments;
}

@property (nonatomic, readonly) NSSet *momentUUIDs;
@property (nonatomic, readonly) NSSet *moments;

- (void).cxx_destruct;
- (unsigned long long)changeCount;
- (id)description;
- (id)initWithMomentUUIDs:(id)arg1;
- (id)initWithMoments:(id)arg1;
- (id)momentUUIDs;
- (id)moments;
- (unsigned long long)type;

@end
