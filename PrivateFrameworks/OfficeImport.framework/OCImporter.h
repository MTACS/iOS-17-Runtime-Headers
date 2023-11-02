
@interface OCImporter : OCMapper {
    NSString * _lastPasswordAttempted;
    NSData * mData;
    id /* block */  mOfficeDOMInspector;
    OITSUProgressContext * mProgressContext;
    OCDReader * mReader;
    bool  mTryAlternateReader;
    NSURL * mURL;
}

@property (nonatomic, copy) NSString *lastPasswordAttempted;
@property (nonatomic, copy) id /* block */ officeDOMInspector;
@property (retain) OITSUProgressContext *progressContext;

+ (bool)URLIsXML:(id)arg1;
+ (Class)binaryReaderClass;
+ (void)initialize;
+ (Class)readerClassForURL:(id)arg1;
+ (id)xmlPathExtensions;
+ (Class)xmlReaderClass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)displayName;
- (id)filename;
- (void)finalizeWithDocumentState:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithURL:(id)arg1;
- (bool)isDocumentEncryptedUnsupportedVersion:(bool*)arg1 errorMessage:(id*)arg2;
- (bool)isDocumentEncryptedUnsupportedVersionHelper:(bool*)arg1 errorMessage:(id*)arg2 readError:(bool*)arg3;
- (bool)isXML;
- (id)lastPasswordAttempted;
- (id /* block */)officeDOMInspector;
- (id)progressContext;
- (Class)readerClass;
- (void)setLastPasswordAttempted:(id)arg1;
- (void)setOfficeDOMInspector:(id /* block */)arg1;
- (bool)setPassphrase:(id)arg1;
- (void)setProgressContext:(id)arg1;
- (void)setURL:(id)arg1;
- (bool)start;
- (bool)tryAlternateReader;
- (id)url;

@end
