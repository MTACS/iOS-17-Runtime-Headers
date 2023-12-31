
@interface MURouteActivityProvider : MUPlaceActivityProvider {
    MKMapItem * _sourceMapItem;
    unsigned long long  _transportType;
}

@property (nonatomic, retain) MKMapItem *destinationMapItem;
@property (nonatomic, retain) MKMapItem *sourceMapItem;
@property (nonatomic) unsigned long long transportType;

- (void).cxx_destruct;
- (id)activitySourceTitle;
- (id)activityURL;
- (id)destinationMapItem;
- (id)initWithSource:(id)arg1 destination:(id)arg2;
- (void)setDestinationMapItem:(id)arg1;
- (void)setSourceMapItem:(id)arg1;
- (void)setTransportType:(unsigned long long)arg1;
- (id)sourceMapItem;
- (unsigned long long)transportType;

@end
