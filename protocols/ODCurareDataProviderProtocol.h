
@protocol ODCurareDataProviderProtocol

@optional

- (ODCurareDataProviderResult *)allUserDataAdapted;
- (ODCurareDataProviderResult *)allUserDataDefault;
- (ODCurareReportFillerMetadata *)evaluationMetadata;

@end
