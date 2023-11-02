
@interface _PASSqliteCollectionsConstraintPlanInfo : NSObject {
    double  _estimatedCost;
    double  _estimatedRows;
    bool  _omit;
    bool  _unique;
}

- (id)initWithEstimatedRows:(double)arg1 estimatedCost:(double)arg2 unique:(bool)arg3 omit:(bool)arg4;

@end
