
@interface _GEOAllCollectionViewTicket : GEOAbstractRequestResponseTicket <GEOMapServiceAllCollectionsViewTicket>

@property (getter=isCancelled, nonatomic, readonly) bool cancelled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) GEOMapServiceTraits *traits;

- (void)parseAllCollectionViewResponse:(id)arg1 usingError:(id)arg2 onCompletionHandler:(id /* block */)arg3;
- (void)submitWithHandler:(id /* block */)arg1 networkActivity:(id /* block */)arg2;

@end
