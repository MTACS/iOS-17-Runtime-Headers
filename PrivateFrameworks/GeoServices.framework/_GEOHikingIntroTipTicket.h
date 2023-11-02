
@interface _GEOHikingIntroTipTicket : GEOAbstractRequestResponseTicket <GEOMapServiceHikingIntroTipTicket>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) GEOMapServiceTraits *traits;

- (void)submitWithHandler:(id /* block */)arg1 networkActivity:(id /* block */)arg2;

@end