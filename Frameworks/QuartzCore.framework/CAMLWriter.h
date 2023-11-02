
@interface CAMLWriter : NSObject {
    struct _CAMLWriterPriv { struct __CFData {} *x1; struct __CFURL {} *x2; id x3; struct _CAMLWriterElement {} *x4; struct __CFString {} *x5; struct __CFSet {} *x6; struct __CFSet {} *x7; int x8; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; } * _priv;
}

@property (retain) NSURL *baseURL;
@property <CAMLWriterDelegate> *delegate;

+ (id)writerWithData:(id)arg1;

- (id)URLStringForResource:(id)arg1;
- (void)_writeElementTree:(struct _CAMLWriterElement { struct _CAMLWriterElement {} *x1; struct _CAMLWriterElement {} *x2; struct _CAMLWriterElement {} *x3; struct _CAMLWriterElement {} **x4; void *x5; struct __CFString {} *x6; struct _CAMLWriterAttribute {} *x7; struct _CAMLWriterAttribute {} **x8; struct __CFString {} *x9; unsigned int x10; }*)arg1;
- (id)baseURL;
- (void)beginElement:(unsigned int)arg1;
- (void)beginPropertyElement:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)encodeObject:(id)arg1;
- (void)encodeObject:(id)arg1 conditionally:(bool)arg2;
- (bool)encodingForReverseSerializationTest;
- (void)endElement;
- (id)initWithData:(id)arg1;
- (void)setBaseURL:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setElementAttribute:(id)arg1 forKey:(id)arg2;
- (void)setElementContent:(id)arg1;
- (void)setEncodingForReverseSerializationTest:(bool)arg1;

@end
