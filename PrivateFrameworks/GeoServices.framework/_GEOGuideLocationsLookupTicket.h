
@interface _GEOGuideLocationsLookupTicket : GEOAbstractRequestResponseTicket <GEOMapServiceGuideLocationsLookupTicket> {
    NSArray * _guideLocationEntries;
}

@property (getter=isCancelled, nonatomic, readonly) bool cancelled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) GEOMapServiceTraits *traits;

- (void).cxx_destruct;
- (id)initWithRequest:(id)arg1 traits:(id)arg2 guideLocationsEntries:(id)arg3;
- (void)submitWithHandler:(id /* block */)arg1 networkActivity:(id /* block */)arg2;

@end
