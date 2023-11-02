
@interface GQDWPAttachmentRef : GQDWPAttachment {
    GQDRoot * mRoot;
    char * mUID;
}

- (void)dealloc;
- (id)drawable;
- (id)initWithUID:(char *)arg1 root:(id)arg2;

@end
