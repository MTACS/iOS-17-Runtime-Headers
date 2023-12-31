
@interface GEOMapItemChildPlace : NSObject {
    GEOPDChildPlace * _childPlace;
    GEOMapItemIdentifier * _identifier;
}

@property (nonatomic, readonly) GEOMapItemIdentifier *identifier;
@property (nonatomic, readonly) NSString *name;

- (void).cxx_destruct;
- (id)identifier;
- (id)initWithChildPlace:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)name;

@end
