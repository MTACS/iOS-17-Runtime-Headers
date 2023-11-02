
@interface WFEvernoteTagsTagFieldParameter : WFDynamicTagFieldParameter <WFDynamicTagFieldDataSource> {
    WFEvernoteAccessResource * _evernoteAccessResource;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) WFEvernoteAccessResource *evernoteAccessResource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)referencedActionResourceClasses;

- (void).cxx_destruct;
- (id)evernoteAccessResource;
- (void)setActionResources:(id)arg1;
- (void)setEvernoteAccessResource:(id)arg1;
- (id)suggestedTagsForTagField:(id)arg1;
- (void)updateTags;
- (void)wasAddedToWorkflow;

@end
