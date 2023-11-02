
@protocol NPKCommutePlanField <NPKPassItemField>

@required

- (NSString *)detailLabel;
- (NSArray *)details;
- (bool)isCountBasedCommutePlan;
- (<NPKDateRange> *)usageDateRange;

@end
