
@interface _GEOMapItemTransitAttribution : NSObject <GEOTransitAttribution> {
    GEOPDTransitAttribution * _transitAttribution;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=_providerNames, nonatomic, readonly) NSArray *providerNames;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_providerNames;
- (id)initWithTransitAttribution:(id)arg1;

@end
