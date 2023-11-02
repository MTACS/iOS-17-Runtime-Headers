
@interface ReadingListMetadataProvider : NSObject <ReadingListMetadataProvider> {
    LPMetadataProvider * _lpMetadataProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)fetchMetadataForBookmark:(id)arg1 completion:(id /* block */)arg2;
- (id)init;

@end
