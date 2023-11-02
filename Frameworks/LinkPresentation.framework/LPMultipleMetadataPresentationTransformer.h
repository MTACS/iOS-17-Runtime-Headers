
@interface LPMultipleMetadataPresentationTransformer : NSObject {
    bool  _hasOnlyFiles;
    NSArray * _metadata;
    unsigned long long  _preferredSizeClass;
    NSDictionary * _summaryCounts;
}

@property (nonatomic) unsigned long long preferredSizeClass;

- (void).cxx_destruct;
- (id)_summaryCounts;
- (id)_summarySubtitle;
- (id)initWithMetadata:(id)arg1;
- (unsigned long long)preferredSizeClass;
- (void)setPreferredSizeClass:(unsigned long long)arg1;
- (id)summary;
- (id)summaryImages;
- (id)summaryMetadata;

@end
