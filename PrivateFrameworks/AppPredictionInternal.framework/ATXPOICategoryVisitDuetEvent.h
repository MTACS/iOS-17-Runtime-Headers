
@interface ATXPOICategoryVisitDuetEvent : ATXDuetEvent {
    bool  _hasExited;
    NSOrderedSet * _possibleCategoryNames;
}

@property (nonatomic, readonly) bool hasExited;
@property (nonatomic, readonly) NSOrderedSet *possibleCategoryNames;

- (void).cxx_destruct;
- (id)description;
- (bool)hasExited;
- (id)identifier;
- (id)initWithCurrentContextStoreValues;
- (id)initWithPossibleCategoryNames:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (id)initWithPossibleCategoryNames:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 hasExited:(bool)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXPOICategoryVisitDuetEvent:(id)arg1;
- (id)possibleCategoryNames;

@end
