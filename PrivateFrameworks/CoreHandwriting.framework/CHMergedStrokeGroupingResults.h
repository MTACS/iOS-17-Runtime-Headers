
@interface CHMergedStrokeGroupingResults : CHStrokeGroupingResult {
    NSDictionary * _groupingResultsByStrategyIdentifier;
}

@property (nonatomic, readonly) NSDictionary *groupingResultsByStrategyIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)groupingResultsByStrategyIdentifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithStrokeGroups:(id)arg1 createdStrokeGroups:(id)arg2 deletedStrokeGroups:(id)arg3 groupingResultsByStrategyIdentifier:(id)arg4;
- (id)strokeGroupsOfClass:(long long)arg1;

@end
