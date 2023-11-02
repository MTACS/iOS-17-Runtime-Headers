
@interface REMTemplateSectionsDataView : NSObject {
    REMStore * _store;
}

@property (nonatomic, readonly) REMStore *store;

- (void).cxx_destruct;
- (id)fetchTemplateSectionWithObjectID:(id)arg1 error:(id*)arg2;
- (id)fetchTemplateSectionsInTemplate:(id)arg1 error:(id*)arg2;
- (id)fetchTemplateSectionsWithObjectIDs:(id)arg1 error:(id*)arg2;
- (id)fetchTemplateSectionsWithTemplateObjectID:(id)arg1 error:(id*)arg2;
- (id)initWithStore:(id)arg1;
- (id)store;
- (id)templateSectionsFromTemplateStorages:(id)arg1 templateSectionStorages:(id)arg2 store:(id)arg3;

@end
