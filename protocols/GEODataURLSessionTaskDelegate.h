
@protocol GEODataURLSessionTaskDelegate <NSObject>

@required

- (void)dataURLSession:(GEODataURLSession *)arg1 didCompleteTask:(GEODataURLSessionTask *)arg2;

@optional

- (void)dataURLSession:(void *)arg1 shouldConvertDataTask:(void *)arg2 toDownloadTaskForEstimatedResponseSize:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: GEODataURLSession *, GEODataURLSessionTask *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)dataURLSession:(void *)arg1 willSendRequest:(void *)arg2 forTask:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: GEODataURLSession *, GEODataRequest *, GEODataURLSessionTask *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GEODataRequest *, void*

@end
