
@interface RDStatusShareWrapper : NSObject {
    _TtC16RegulatoryDomain16RDStatusListener * _listener;
}

@property (retain) _TtC16RegulatoryDomain16RDStatusListener *listener;

- (void).cxx_destruct;
- (id)init;
- (void)listenForStatus:(id /* block */)arg1;
- (void)listenForStatuses:(id /* block */)arg1;
- (id)listener;
- (void)setListener:(id)arg1;
- (void)stopListening;

@end
