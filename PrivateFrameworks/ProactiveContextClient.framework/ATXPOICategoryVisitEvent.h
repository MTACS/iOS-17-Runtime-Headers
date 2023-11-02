
@interface ATXPOICategoryVisitEvent : NSObject {
    NSDate * _endDate;
    bool  _hasExited;
    NSOrderedSet * _possibleCategoryNames;
    NSDate * _startDate;
}

@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) bool hasExited;
@property (nonatomic, readonly) NSOrderedSet *possibleCategoryNames;
@property (nonatomic, readonly) NSDate *startDate;

- (void).cxx_destruct;
- (id)description;
- (id)endDate;
- (bool)hasExited;
- (id)identifier;
- (id)initWithPossibleCategoryNames:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 hasExited:(bool)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXPOICategoryVisitEvent:(id)arg1;
- (id)possibleCategoryNames;
- (id)startDate;

@end
