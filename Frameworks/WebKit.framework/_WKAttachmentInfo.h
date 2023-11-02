
@interface _WKAttachmentInfo : NSObject {
    struct RefPtr<const API::Attachment, WTF::RawPtrTraits<const API::Attachment>, WTF::DefaultRefDerefTraits<const API::Attachment>> { 
        struct Attachment {} *m_ptr; 
    }  _attachment;
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  _filePath;
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  _mimeType;
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  _utiType;
}

@property (nonatomic, readonly) NSString *contentType;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) NSString *filePath;
@property (nonatomic, readonly) NSFileWrapper *fileWrapper;
@property (nonatomic, readonly) NSString *name;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)contentType;
- (id)data;
- (id)filePath;
- (id)fileWrapper;
- (id)initWithAttachment:(const void*)arg1;
- (id)name;

@end
