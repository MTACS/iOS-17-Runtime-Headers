
@interface GEOMapItemChildItem : NSObject {
    GEOMapItemChildAction * _childItemAction;
    GEOMapItemChildPlace * _childItemPlace;
    long long  _childItemType;
    GEOPublisherResult * _publisherResult;
}

@property (nonatomic, retain) GEOMapItemChildAction *childItemAction;
@property (nonatomic, retain) GEOMapItemChildPlace *childItemPlace;
@property (nonatomic) long long childItemType;
@property (nonatomic, readonly) GEOPublisherResult *publisherResult;

- (void).cxx_destruct;
- (id)childItemAction;
- (id)childItemPlace;
- (long long)childItemType;
- (id)initWithChildItem:(id)arg1;
- (id)initWithChildPlace:(id)arg1;
- (id)initWithPublisherResult:(id)arg1;
- (id)publisherResult;
- (void)setChildItemAction:(id)arg1;
- (void)setChildItemPlace:(id)arg1;
- (void)setChildItemType:(long long)arg1;

@end
