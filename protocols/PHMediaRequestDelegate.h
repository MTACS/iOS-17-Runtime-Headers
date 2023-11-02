
@protocol PHMediaRequestDelegate <NSObject>

@required

- (void)mediaRequest:(PHMediaRequest *)arg1 didFindLocallyAvailableResult:(bool)arg2 isDegraded:(bool)arg3;
- (void)mediaRequest:(PHMediaRequest *)arg1 didFinishWithResult:(PHCompositeMediaResult *)arg2;
- (void)mediaRequest:(PHMediaRequest *)arg1 didReportProgress:(NSProgress *)arg2;
- (void)mediaRequest:(PHMediaRequest *)arg1 didRequestRetryWithHintsAllowed:(bool)arg2;
- (bool)mediaRequestCanRequestRepair:(PHMediaRequest *)arg1;
- (void)mediaRequestDidRequestRetry:(PHMediaRequest *)arg1;

@end
