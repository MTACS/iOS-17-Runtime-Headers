
@interface BFMSeriesBase : BCMResource <BFMSeries> {
    void hasUniqueAuthors;
    void isOrdered;
    void kind;
    void name;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  url;
}

@property (nonatomic, readonly) NSArray *_assets;
@property (nonatomic, readonly) NSArray *assets;
@property (nonatomic, readonly) NSArray *assetsEnrichedWithSeries;
@property (nonatomic, readonly) _TtC14BookFoundation12MResourceSet *assetsResourceSet;
@property (nonatomic, readonly) NSNumber *authorCount;
@property (nonatomic, readonly) NSDictionary *authorDisplayInfo;
@property (nonatomic, readonly) NSArray *authorNames;
@property (nonatomic, readonly) NSArray *contentsForArtwork;
@property (nonatomic, readonly) NSString *currentSort;
@property (nonatomic, readonly) NSArray *genres;
@property (nonatomic, readonly) bool hasUniqueAuthors;
@property (nonatomic, readonly) bool isAudiobookSeries;
@property (nonatomic, readonly) bool isBookSeries;
@property (nonatomic, readonly) bool isExplicit;
@property (nonatomic, readonly) bool isOrdered;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSURL *url;

+ (long long)type;

- (void).cxx_destruct;
- (id)_assets;
- (id)assets;
- (id)assetsEnrichedWithSeries;
- (id)assetsResourceSet;
- (id)authorCount;
- (id)authorDisplayInfo;
- (id)authorNames;
- (id)contentsForArtwork;
- (id)currentSort;
- (void)fetchAllAssetsWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'E' using 'void*' */ void*, const const out const /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (void)fetchNextAssetsWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'E' using 'void*' */ void*, const const out const /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (id)genres;
- (bool)hasUniqueAuthors;
- (bool)isAudiobookSeries;
- (bool)isBookSeries;
- (bool)isExplicit;
- (bool)isOrdered;
- (id)name;
- (id)url;

@end
