
@protocol WeatherServiceClientProtocol <NSObject>

@required

- (void)serviceDidReceiveResponse:(WFResponse *)arg1;
- (void)taskIdentifier:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFTaskIdentifier *, void*

@end
