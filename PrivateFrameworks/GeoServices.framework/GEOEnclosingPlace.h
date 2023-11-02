
@interface GEOEnclosingPlace : NSObject {
    GEOPDContainmentPlace * _enclosingPlace;
}

@property (nonatomic, readonly) <GEOServerFormattedString> *containmentTextTemplate;
@property (nonatomic, readonly) GEOMapItemIdentifier *parentIdentifier;

- (void).cxx_destruct;
- (id)containmentTextTemplate;
- (id)initWithContainmentPlace:(id)arg1;
- (id)parentIdentifier;

@end
