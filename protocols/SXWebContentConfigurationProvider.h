
@protocol SXWebContentConfigurationProvider <NSObject>

@required

- (SWConfiguration *)configurationForSize:(struct CGSize { double x1; double x2; })arg1 dataSources:(NSDictionary *)arg2 sourceURL:(NSURL *)arg3;
- (void)onChange:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
