
@interface _GEOPlacePhotoLookupTicket : GEOAbstractRequestResponseTicket <GEOMapServicePhotoLookupTicket> {
    GEOMapItemIdentifier * _mapItemIdentifier;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    GEOMapServiceTraits * _traits;
    NSString * _vendorIdentifier;
}

@property (getter=isCancelled, nonatomic, readonly) bool cancelled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithVendorIdentifier:(id)arg1 mapItemIdentifier:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 traits:(id)arg4;
- (void)submitWithHandler:(id /* block */)arg1 networkActivity:(id /* block */)arg2;

@end
