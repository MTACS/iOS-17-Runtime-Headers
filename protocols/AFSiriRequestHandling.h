
@protocol AFSiriRequestHandling <NSObject>

@required

- (void)handleSiriRequest:(void *)arg1 deliveryHandler:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 13: AFSiriRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, id /* block */, void*, void, id /* block */, AFSiriResponse *, NSError *, void*

@end
