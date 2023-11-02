
@interface _BSUIMapServiceTicket : NSObject <BSUIMapServiceTicket> {
    <MKMapServiceTicket> * _serviceTicket;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)submitWithHandler:(id /* block */)arg1;

@end
