
@interface PGDiscoveryFeedItem : NSObject <PGDiscoveryFeedItem> {
    bool  _isCollection;
    NSString * _localIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithObject:(id)arg1;

@end
