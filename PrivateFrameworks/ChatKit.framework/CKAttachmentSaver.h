
@interface CKAttachmentSaver : NSObject {
    NSMutableArray * _attachments;
    unsigned long long  _errorCount;
}

- (void).cxx_destruct;
- (void)_pop;
- (void)_saveCompletion:(id)arg1;
- (void)_saveCompletionForImage:(id)arg1 error:(id)arg2 context:(void*)arg3;
- (void)_saveCompletionForVideoWithPath:(id)arg1 error:(id)arg2 context:(void*)arg3;
- (void)_saveNextAttachment;
- (id)initWithAttachments:(id)arg1;
- (void)popAndSaveNextAttachment;
- (void)runToCompletion;

@end
