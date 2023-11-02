
@interface PGGraphMusicGenreNode : PGGraphPropertylessNode <PGGraphGenre> {
    NSString * _label;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *name;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned short)domain;
- (id)initWithLabel:(id)arg1;
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3;
- (id)label;
- (id)name;

@end
