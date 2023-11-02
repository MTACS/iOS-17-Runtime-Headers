
@protocol IKJSDOMDocumentAppBridge <NSObject>

@required

- (void)updateForDocument:(IKDOMDocument *)arg1;

@optional

- (NSArray *)impressionsMatching:(NSString *)arg1 reset:(bool)arg2;
- (NSArray *)recordedImpressions;
- (NSArray *)recordedImpressions:(bool)arg1;
- (void)recordedImpressions:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)recordedImpressionsMatching:(void *)arg1 reset:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)runTestWithName:(NSString *)arg1 options:(NSDictionary *)arg2;
- (void)scrollToTop;
- (void)setNeedsUpdateForDocument:(IKDOMDocument *)arg1;
- (NSArray *)snapshotImpressions;

@end
