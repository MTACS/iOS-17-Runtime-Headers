
@interface MKPlacePublisherRefiner : NSObject {
    MKMapItemIdentifier * _publisherIdentifier;
    <MKMapServicePublisherViewTicket> * _ticket;
}

- (void).cxx_destruct;
- (void)fetchWithCallbackQueue:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithPublisherIdentifier:(unsigned long long)arg1;
- (id)initWithPublisherIdentifier:(unsigned long long)arg1 providerIdentifier:(int)arg2;

@end
