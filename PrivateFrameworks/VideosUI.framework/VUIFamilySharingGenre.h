
@interface VUIFamilySharingGenre : NSObject {
    NSArray * _genreIdentifiers;
    NSString * _genreTitle;
}

@property (nonatomic, retain) NSArray *genreIdentifiers;
@property (nonatomic, retain) NSString *genreTitle;

- (void).cxx_destruct;
- (id)genreIdentifiers;
- (id)genreTitle;
- (void)setGenreIdentifiers:(id)arg1;
- (void)setGenreTitle:(id)arg1;

@end
