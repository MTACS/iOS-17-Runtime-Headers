
@protocol RPTTestParameters <NSObject>

@required

- (id /* block */)completionHandler:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL
- (id /* block */)composerBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, <RPTComposer> *, void*, id, SEL
- (void)prepareWithComposer:(id <RPTComposer>)arg1;
- (void)setTestName:(NSString *)arg1;
- (NSString *)testName;

@optional

- (bool)managesTestStartAndEnd;
- (void)waitForPostEventStreamDelayWithHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
