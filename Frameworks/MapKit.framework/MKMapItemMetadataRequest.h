
@interface MKMapItemMetadataRequest : NSObject {
    MKMapItem * _mapItem;
}

@property (nonatomic, retain) MKMapItem *mapItem;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) NSURLRequest *urlRequest;

- (void).cxx_destruct;
- (void)handleData:(id)arg1;
- (void)handleError:(id)arg1;
- (id)mapItem;
- (void)setMapItem:(id)arg1;
- (id)url;
- (id)urlRequest;

@end
