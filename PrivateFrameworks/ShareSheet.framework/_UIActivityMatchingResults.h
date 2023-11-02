
@interface _UIActivityMatchingResults : NSObject {
    _UIActivityMatchingContext * _context;
    NSMutableSet * _excludedActivityTypesSet;
    NSMutableArray * _hiddenActivitiesMutable;
    NSArray * _orderedActivities;
}

@property (nonatomic, readonly) _UIActivityMatchingContext *context;
@property (nonatomic, readonly) NSArray *excludedActivityTypes;
@property (nonatomic, readonly) NSArray *hiddenActivities;
@property (nonatomic, retain) NSArray *orderedActivities;

- (void).cxx_destruct;
- (void)addExcludedActivityTypes:(id)arg1;
- (void)addHiddenActivities:(id)arg1;
- (id)context;
- (id)excludedActivityTypes;
- (id)hiddenActivities;
- (id)initWithActivityMatchingContext:(id)arg1;
- (id)orderedActivities;
- (void)setOrderedActivities:(id)arg1;

@end
