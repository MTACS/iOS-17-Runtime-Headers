
@interface ContactsUI.CNPosterEditorViewConfiguration : NSObject {
    void contactIdentifier;
    void displayName;
    void imageData;
    void isMe;
    void posterArchiveData;
    void posterConfiguration;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithImageData:(id)arg1 displayName:(id)arg2;
- (id)initWithImageData:(id)arg1 displayName:(id)arg2 contactIdentifier:(id)arg3 isMe:(bool)arg4;
- (id)initWithPosterArchiveData:(id)arg1 displayName:(id)arg2;
- (id)initWithPosterArchiveData:(id)arg1 displayName:(id)arg2 contactIdentifier:(id)arg3 isMe:(bool)arg4;
- (id)initWithPosterArchiveData:(id)arg1 imageData:(id)arg2 displayName:(id)arg3;
- (id)initWithPosterConfiguration:(id)arg1 displayName:(id)arg2;

@end
