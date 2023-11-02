
@interface PGExcitingMomentsMemoryTitleGenerator : PGTitleGenerator {
    PGGraphPersonNodeCollection * _personNodeAsCollection;
}

@property (nonatomic, retain) PGGraphPersonNodeCollection *personNodeAsCollection;

- (void).cxx_destruct;
- (void)_generateTitleAndSubtitleWithResult:(id /* block */)arg1;
- (id)personNodeAsCollection;
- (void)setPersonNodeAsCollection:(id)arg1;

@end
