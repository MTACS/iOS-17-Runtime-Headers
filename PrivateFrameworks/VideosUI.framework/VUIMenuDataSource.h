
@interface VUIMenuDataSource : NSObject {
    NSArray * _genreMenuItems;
    bool  _hasGenresDataForCheckHasItemsOption;
    NSArray * _mainMenuItems;
}

@property (nonatomic, retain) NSArray *genreMenuItems;
@property (nonatomic) bool hasGenresDataForCheckHasItemsOption;
@property (nonatomic, retain) NSArray *mainMenuItems;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)genreMenuItems;
- (bool)hasGenresDataForCheckHasItemsOption;
- (id)initWithMainMenuItems:(id)arg1 genreMenuItems:(id)arg2;
- (id)mainMenuItems;
- (void)setGenreMenuItems:(id)arg1;
- (void)setHasGenresDataForCheckHasItemsOption:(bool)arg1;
- (void)setMainMenuItems:(id)arg1;

@end
