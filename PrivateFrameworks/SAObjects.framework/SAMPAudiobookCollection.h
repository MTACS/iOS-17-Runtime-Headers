
@interface SAMPAudiobookCollection : SAMPCollection

@property (nonatomic, copy) NSString *artist;
@property (nonatomic, copy) NSString *sortArtist;

+ (id)audiobookCollection;
+ (id)audiobookCollectionWithDictionary:(id)arg1 context:(id)arg2;

- (id)artist;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setArtist:(id)arg1;
- (void)setSortArtist:(id)arg1;
- (id)sortArtist;

@end
