
@protocol TCGECModel

@required

- (void)enumerateIssuesForSentence:(void *)arg1 checkTermination:(void *)arg2 withBlock:(void *)arg3; // needs 3 arg types, found 13: NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, struct _NSRange { unsigned long long x1; unsigned long long x2; }, float, NSString *, NSArray *, bool*, void*
- (id)initWithModelPath:(NSString *)arg1 OTABundlePath:(NSString *)arg2 options:(NSDictionary *)arg3;

@end
