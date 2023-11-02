
@protocol CRFormPostProcessingStep <NSObject>

@required

- (NSArray *)process:(NSArray *)arg1 externalFields:(NSArray *)arg2 document:(CRDocumentOutputRegion *)arg3 options:(NSDictionary *)arg4;

@end
