
@interface PGPetMemoryTitleGenerator : PGTitleGenerator {
    PGGraphPersonNodeCollection * _personNodeAsCollection;
    PGGraphPetNodeCollection * _petNodes;
    NSString * _seasonName;
    bool  _useAdventureTitle;
    bool  _usePetAndPersonTitle;
}

@property (nonatomic, retain) PGGraphPersonNodeCollection *personNodeAsCollection;
@property (nonatomic, retain) PGGraphPetNodeCollection *petNodes;
@property (nonatomic, retain) NSString *seasonName;
@property (nonatomic) bool useAdventureTitle;
@property (nonatomic) bool usePetAndPersonTitle;

- (void).cxx_destruct;
- (void)_generateTitleAndSubtitleWithResult:(id /* block */)arg1;
- (id)personNodeAsCollection;
- (id)petNodes;
- (id)seasonName;
- (void)setPersonNodeAsCollection:(id)arg1;
- (void)setPetNodes:(id)arg1;
- (void)setSeasonName:(id)arg1;
- (void)setUseAdventureTitle:(bool)arg1;
- (void)setUsePetAndPersonTitle:(bool)arg1;
- (bool)useAdventureTitle;
- (bool)usePetAndPersonTitle;

@end
