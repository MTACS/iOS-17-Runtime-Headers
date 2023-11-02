
@interface CLGeocoderInternal : NSObject {
    id /* block */  _geocodeCompletionHandler;
    NSObject<OS_dispatch_queue> * _queue;
    CLSilo * _responseSilo;
    <GEOMapServiceTicket> * _ticket;
}

@property (retain) CLSilo *responseSilo;

- (void)dealloc;
- (id)init;
- (id)responseSilo;
- (void)setResponseSilo:(id)arg1;

@end
