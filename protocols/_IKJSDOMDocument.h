
@protocol _IKJSDOMDocument <IKJSDOMDocument, JSExport>

@required

- (NSArray *)matchingImpressions:(NSString *)arg1 :(JSValue *)arg2;
- (NSArray *)recordedImpressions:(JSValue *)arg1;
- (void)recordedImpressions:(JSValue *)arg1 :(JSValue *)arg2;
- (void)recordedImpressionsMatching:(NSString *)arg1 :(JSValue *)arg2 :(JSValue *)arg3;
- (void)replace:(IKDOMDocument *)arg1;
- (void)runTest:(NSString *)arg1 :(NSDictionary *)arg2;
- (void)scrollToTop;
- (NSArray *)snapshotImpressions;

@end
