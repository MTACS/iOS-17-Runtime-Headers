
@interface BLSHPresentationDifference : NSObject {
    bool  _hasChanges;
    NSArray * _insertions;
    NSArray * _removals;
}

@property (nonatomic, readonly) bool hasChanges;
@property (nonatomic, readonly) NSArray *insertions;
@property (nonatomic, readonly) NSArray *removals;

- (void).cxx_destruct;
- (id)description;
- (bool)hasChanges;
- (id)initWithHasChanges:(bool)arg1 insertedEnvironments:(id)arg2 removedEnvironments:(id)arg3;
- (id)insertions;
- (id)removals;

@end
