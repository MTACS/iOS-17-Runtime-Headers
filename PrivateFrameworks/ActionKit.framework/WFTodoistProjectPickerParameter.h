
@interface WFTodoistProjectPickerParameter : WFEnumerationParameter {
    WFAccountAccessResource * _accessResource;
    bool  _hasLoadedProjects;
    NSArray * _possibleStates;
}

@property (nonatomic) WFAccountAccessResource *accessResource;
@property (nonatomic) bool hasLoadedProjects;

- (void).cxx_destruct;
- (id)accessResource;
- (id)accessoryColorForPossibleState:(id)arg1;
- (void)dealloc;
- (void)fetchProjectsIfNeeded;
- (bool)hasLoadedProjects;
- (void)loadProjectsFromCache;
- (id)localizedLabelForPossibleState:(id)arg1;
- (id)possibleStates;
- (id)projectNamed:(id)arg1;
- (id)projects;
- (void)setAccessResource:(id)arg1;
- (void)setHasLoadedProjects:(bool)arg1;
- (void)setProjects:(id)arg1;
- (void)wasAddedToWorkflow;

@end
