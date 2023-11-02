
@interface PGGraphMusicTrackNode : PGGraphOptimizedNode {
    double  _durationInSeconds;
    NSString * _title;
}

@property (nonatomic, readonly) NSSet *albumNodes;
@property (nonatomic, readonly) NSSet *artistNodes;
@property (readonly) double durationInSeconds;
@property (nonatomic, readonly) NSSet *genreNodes;
@property (nonatomic, readonly) NSString *title;

+ (id)musicTrackTitleSortDescriptors;

- (void).cxx_destruct;
- (id)albumNodes;
- (id)artistNodes;
- (id)description;
- (unsigned short)domain;
- (double)durationInSeconds;
- (void)enumerateAlbumNodesUsingBlock:(id /* block */)arg1;
- (void)enumerateArtistNodesUsingBlock:(id /* block */)arg1;
- (void)enumerateGenreNodesUsingBlock:(id /* block */)arg1;
- (id)genreNodes;
- (bool)hasProperties:(id)arg1;
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3;
- (id)initWithTitle:(id)arg1 durationInSeconds:(double)arg2;
- (id)label;
- (id)propertyDictionary;
- (id)title;

@end
