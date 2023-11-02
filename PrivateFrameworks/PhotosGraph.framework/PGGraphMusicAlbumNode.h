
@interface PGGraphMusicAlbumNode : PGGraphOptimizedNode {
    NSString * _title;
}

@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)description;
- (unsigned short)domain;
- (bool)hasProperties:(id)arg1;
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3;
- (id)initWithTitle:(id)arg1;
- (id)label;
- (id)propertyDictionary;
- (id)title;

@end
