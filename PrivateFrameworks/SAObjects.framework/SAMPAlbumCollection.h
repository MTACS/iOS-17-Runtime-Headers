
@interface SAMPAlbumCollection : SAMPCollection

@property (nonatomic, copy) NSString *artist;
@property (nonatomic, copy) NSString *description;
@property (nonatomic, copy) NSString *sortArtist;

+ (id)albumCollection;
+ (id)albumCollectionWithDictionary:(id)arg1 context:(id)arg2;

- (id)artist;
- (id)description;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setArtist:(id)arg1;
- (void)setDescription:(id)arg1;
- (void)setSortArtist:(id)arg1;
- (id)sortArtist;

@end
