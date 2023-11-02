
@interface _GEOMapFeatureAccessRequest : NSObject <GEOMapFeatureAccessRequest> {
    NSMutableArray * _clientIdentifiers;
    geo_isolater * _clientIdentifiersIsolater;
    GEOTileLoader * _tileLoader;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) GEOTileLoader *tileLoader;

- (void).cxx_destruct;
- (void)addTileRequest:(id)arg1;
- (void)cancel;
- (id)initWithTileLoader:(id)arg1;
- (id)tileLoader;

@end
