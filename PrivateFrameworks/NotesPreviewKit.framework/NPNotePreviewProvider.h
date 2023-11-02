
@interface NPNotePreviewProvider : NSObject {
    NPNotePreviewProviderInternal * _notePreviewProvider;
}

@property (nonatomic, retain) NPNotePreviewProviderInternal *notePreviewProvider;

+ (id)shared;

- (void).cxx_destruct;
- (id)initWithNotePreviewProvider:(id)arg1;
- (id)notePreviewProvider;
- (id)previewForUserActivity:(id)arg1 error:(id*)arg2;
- (void)setNotePreviewProvider:(id)arg1;

@end
