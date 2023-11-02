
@interface GEOPlaceCollection : NSObject <MUPlaceCollectionPullQuoteViewModel> {
    GEOPDPlaceCollection * _collection;
    GEOPublisher * _publisher;
    <GEOCollectionPublisherAttribution> * _publisherAttribution;
    NSString * _publisherAttributionIdentifierString;
}

@property (nonatomic, readonly) NSString *authorName;
@property (nonatomic, readonly) <GEOMapItemPhoto> *authorPhoto;
@property (getter=isBlocked, nonatomic, readonly) bool blocked;
@property (nonatomic, readonly) NSString *collectionDescription;
@property (nonatomic, readonly) NSString *collectionHTMLDescription;
@property (nonatomic, readonly) GEOMapItemIdentifier *collectionIdentifier;
@property (nonatomic, readonly) NSString *collectionLongTitle;
@property (nonatomic, readonly) NSString *collectionName;
@property (nonatomic, readonly) NSString *collectionTitle;
@property (nonatomic, readonly) NSURL *collectionURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *itemIds;
@property (nonatomic, readonly) NSDate *lastModifiedDate;
@property (nonatomic, readonly) NSArray *mediaLinks;
@property (nonatomic, readonly) unsigned long long numberOfItems;
@property (nonatomic, readonly) unsigned long long numberOfPlaces;
@property (nonatomic, readonly) NSArray *photos;
@property (nonatomic, readonly) NSString *plainTextDescription;
@property (nonatomic, readonly) GEOPublisher *publisher;
@property (nonatomic, readonly) <GEOCollectionPublisherAttribution> *publisherAttribution;
@property (nonatomic, readonly) NSString *publisherAttributionIdentifierString;
@property (nonatomic, readonly) GEOPlaceCollectionPullQuote *publisherBlockQuote;
@property (nonatomic, readonly) NSURL *publisherCollectionURL;
@property (nonatomic, readonly) NSString *publisherName;
@property (readonly) Class superclass;
@property (getter=isSuppressed, nonatomic, readonly) bool suppressed;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

- (void).cxx_destruct;
- (id)authorName;
- (id)authorPhoto;
- (id)collectionDescription;
- (id)collectionHTMLDescription;
- (id)collectionIdentifier;
- (id)collectionLongTitle;
- (id)collectionTitle;
- (id)collectionURL;
- (id)description;
- (unsigned long long)hash;
- (id)initWithCollection:(id)arg1 usingAttribution:(id)arg2;
- (bool)isBlocked;
- (bool)isEqual:(id)arg1;
- (bool)isSuppressed;
- (id)itemIds;
- (id)lastModifiedDate;
- (id)mediaLinks;
- (unsigned long long)numberOfItems;
- (id)photos;
- (id)publisher;
- (id)publisherAttribution;
- (id)publisherAttributionIdentifierString;
- (id)publisherBlockQuote;
- (id)publisherCollectionURL;

// Image: /System/Library/PrivateFrameworks/MapsUI.framework/MapsUI

- (id)collectionName;
- (unsigned long long)numberOfPlaces;
- (id)plainTextDescription;
- (id)publisherIconForIsNightMode:(bool)arg1;
- (id)publisherName;

@end
