
@interface DEManifest : NSObject {
    NSDictionary * _contents;
    unsigned long long  _dirDownloadType;
    NSURL * _downloadURLPrefix;
    NSData * _keyVersion;
    NSString * _name;
    NSURL * _publicationURL;
    NSData * _summary;
    bool  _testOnly;
    NSData * _version;
}

@property (nonatomic, retain) NSDictionary *contents;
@property (nonatomic) unsigned long long dirDownloadType;
@property (nonatomic, retain) NSURL *downloadURLPrefix;
@property (nonatomic, retain) NSData *keyVersion;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSURL *publicationURL;
@property (nonatomic, retain) NSData *summary;
@property (nonatomic) bool testOnly;
@property (nonatomic, retain) NSData *version;

+ (id)anyManifestWithContentsOfURL:(id)arg1 encrypted:(bool)arg2;
+ (id)anyManifestWithContentsOfURL:(id)arg1 wasEncrypted:(bool*)arg2;
+ (id)manifestWithContentsOfURL:(id)arg1;
+ (id)manifestWithContentsOfURL:(id)arg1 encrypted:(bool)arg2;
+ (id)manifestWithContentsOfURL:(id)arg1 encrypted:(bool)arg2 allowAllKeys:(bool)arg3 filter:(id)arg4;
+ (id)manifestWithContentsOfURL:(id)arg1 encrypted:(bool)arg2 filter:(id)arg3;
+ (id)manifestWithContentsOfURL:(id)arg1 wasEncrypted:(bool*)arg2 allowAllKeys:(bool)arg3 filter:(id)arg4;
+ (id)manifestWithContentsOfURL:(id)arg1 wasEncrypted:(bool*)arg2 filter:(id)arg3;

- (void).cxx_destruct;
- (id)contents;
- (unsigned long long)dirDownloadType;
- (id)downloadURLPrefix;
- (id)init;
- (id)initWithName:(id)arg1 contents:(id)arg2 summary:(id)arg3 dirDownloadType:(unsigned long long)arg4;
- (id)initWithName:(id)arg1 contents:(id)arg2 summary:(id)arg3 dirDownloadType:(unsigned long long)arg4 version:(id)arg5 keyVersion:(id)arg6;
- (id)keyVersion;
- (id)name;
- (id)publicationURL;
- (void)setContents:(id)arg1;
- (void)setDirDownloadType:(unsigned long long)arg1;
- (void)setDownloadURLPrefix:(id)arg1;
- (void)setKeyVersion:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPublicationURL:(id)arg1;
- (void)setSummary:(id)arg1;
- (void)setTestOnly:(bool)arg1;
- (void)setVersion:(id)arg1;
- (id)summary;
- (bool)testOnly;
- (id)version;
- (bool)writeToURL:(id)arg1;
- (bool)writeToURL:(id)arg1 keyId:(unsigned long long)arg2 privateKey:(id)arg3;

@end
