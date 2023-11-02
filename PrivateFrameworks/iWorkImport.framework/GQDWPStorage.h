
@interface GQDWPStorage : NSObject {
    struct __CFArray { } * mAttachments;
    struct __CFArray { } * mBody;
    GQDSStylesheet * mStylesheet;
}

- (struct __CFArray { }*)attachments;
- (void)dealloc;
- (id)stylesheet;

@end
