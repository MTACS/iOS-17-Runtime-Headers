
@interface PodcastsFoundation.BaseFeedResponse : NSObject <MTMAPIResponse> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  params;
    void parsedCache;
    void request;
    void response;
    void showMetadata;
}

- (void).cxx_destruct;
- (id)init;
- (id)itemInSection:(long long)arg1 row:(long long)arg2;
- (id)itemsFor:(long long)arg1;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (id)sectionAtIndex:(unsigned long long)arg1;

@end
