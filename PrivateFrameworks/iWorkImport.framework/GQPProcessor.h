
@interface GQPProcessor : NSObject {
    void * mActionStack;
    SFUZipArchive * mArchive;
    struct __CFBundle { } * mBundle;
    SFUCryptoKey * mCryptoKey;
    GQSDocument * mDocumentState;
    SFUZipInflateInputStream * mInputStream;
    unsigned char  mIsProgressive;
    struct __QLPreviewRequest { } * mOutputPreviewRequest;
    struct _xmlParserInputBuffer { void *x1; int (*x2)(); int (*x3)(); struct _xmlCharEncodingHandler {} *x4; struct _xmlBuf {} *x5; struct _xmlBuf {} *x6; int x7; int x8; unsigned long long x9; } * mParserInputBuffer;
    struct _xmlTextReader { } * mReader;
    void * mStateStack;
    struct CGSize { 
        double width; 
        double height; 
    }  mThumbnailSize;
    unsigned long long  mTotalBytesToConsume;
    bool  mWrongFormat;
}

+ (struct _xmlTextReader { }*)createXmlReaderWithPath:(id)arg1 indexFileName:(id)arg2 cryptoKey:(id)arg3;
+ (struct _xmlTextReader { }*)createXmlReaderWithZipArchive:(id)arg1 indexFileName:(id)arg2 cryptoKey:(id)arg3 indexEntry:(id*)arg4 zipInputStream:(id*)arg5;
+ (void)initialize;

- (void*)actionStack;
- (id)archive;
- (struct __CFBundle { }*)bundle;
- (id)cryptoKey;
- (void)dealloc;
- (id)documentState;
- (bool)go;
- (id)initWithPath:(id)arg1 indexFileName:(id)arg2 previewRequest:(struct __QLPreviewRequest { }*)arg3 cryptoKey:(id)arg4;
- (id)initWithZipArchive:(id)arg1 indexFileName:(id)arg2 previewRequest:(struct __QLPreviewRequest { }*)arg3;
- (id)initWithZipArchive:(id)arg1 indexFileName:(id)arg2 previewRequest:(struct __QLPreviewRequest { }*)arg3 cryptoKey:(id)arg4;
- (bool)isWrongFormat;
- (void)pushInitialState;
- (void)setBundle:(struct __CFBundle { }*)arg1;
- (void)setProgressiveMode:(unsigned char)arg1;
- (void)setThumbnailSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setWrongFormat:(bool)arg1;
- (void*)stateStack;
- (struct CGSize { double x1; double x2; })thumbnailSize;

@end
