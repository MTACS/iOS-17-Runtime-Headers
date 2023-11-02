
@interface HRMedicalRecordFormatter : NSObject {
    void context;
    void store;
}

- (void).cxx_destruct;
- (id)attachmentItemsFromRecord:(id)arg1;
- (id)attachmentItemsTitleFromRecord:(id)arg1;
- (id)displayItemsFromRecord:(id)arg1;
- (id)init;
- (id)initWithConceptStore:(id)arg1 context:(long long)arg2;
- (id)structuredItemsFromRecord:(id)arg1;

@end
