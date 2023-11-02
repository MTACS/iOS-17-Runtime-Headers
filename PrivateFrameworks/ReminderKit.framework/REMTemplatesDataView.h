
@interface REMTemplatesDataView : NSObject {
    REMStore * _store;
}

@property (nonatomic, readonly) REMStore *store;

- (void).cxx_destruct;
- (id)fetchTemplateWithObjectID:(id)arg1 error:(id*)arg2;
- (id)fetchTemplatesInAccount:(id)arg1 error:(id*)arg2;
- (id)fetchTemplatesWithObjectIDs:(id)arg1 error:(id*)arg2;
- (id)initWithStore:(id)arg1;
- (id)store;
- (id)templatesFromTemplateStorages:(id)arg1 store:(id)arg2;

@end
