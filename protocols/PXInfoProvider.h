
@protocol PXInfoProvider <NSObject>

@required

- (NSProgress *)requestInfoOfKind:(void *)arg1 withResultHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, void*

@optional

- (long long)priorityForInfoRequestOfKind:(NSString *)arg1;

@end
