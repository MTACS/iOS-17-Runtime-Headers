
@interface SXMapComponentAnnotation : MKPointAnnotation {
    SXMapItem * _mapItem;
}

@property (nonatomic, readonly) SXMapItem *mapItem;

- (void).cxx_destruct;
- (id)initWithMapItem:(id)arg1;
- (id)mapItem;

@end
