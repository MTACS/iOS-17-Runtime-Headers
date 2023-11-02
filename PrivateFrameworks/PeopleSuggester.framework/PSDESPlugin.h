
@interface PSDESPlugin : NSObject <DESRecipeEvaluation> {
    <_DKKnowledgeQuerying> * _knowledgeStore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <_DKKnowledgeQuerying> *knowledgeStore;
@property (readonly) Class superclass;

+ (void)initialize;

- (void).cxx_destruct;
- (id)knowledgeStore;
- (void)performEvaluation:(id)arg1;
- (void)setKnowledgeStore:(id)arg1;
- (bool)shouldDownloadAttachmentWithURL:(id)arg1 recipe:(id)arg2 recordInfo:(id)arg3;

@end
