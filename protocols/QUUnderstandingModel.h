
@protocol QUUnderstandingModel <NSObject>

@required

- (void)getUnderstandingForQueryString:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <QUUnderstandingOutput> *, NSError *, void*
- (void)loadWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <QUUnderstandingModel> *, NSError *, void*
- (NSLocale *)locale;

@end
