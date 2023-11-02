
@interface GEOPublisher : NSObject {
    GEOPDPublisher * _publisher;
    <GEOCollectionPublisherAttribution> * _publisherAttribution;
    NSString * _publisherAttributionIdentifierString;
}

@property (getter=isBlocked, nonatomic, readonly) bool blocked;
@property (nonatomic, readonly) GEOMapItemIdentifier *identifier;
@property (nonatomic, readonly) <GEOCollectionPublisherAttribution> *publisherAttribution;
@property (nonatomic, readonly) NSString *publisherDescription;
@property (nonatomic, readonly) NSURL *publisherURL;
@property (getter=isSuppressed, nonatomic, readonly) bool suppressed;
@property (nonatomic, readonly) long long totalCollectionCount;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithPublisher:(id)arg1 usingAttribution:(id)arg2;
- (bool)isBlocked;
- (bool)isEqual:(id)arg1;
- (bool)isSuppressed;
- (id)publisherAttribution;
- (id)publisherDescription;
- (id)publisherURL;
- (long long)totalCollectionCount;

@end
