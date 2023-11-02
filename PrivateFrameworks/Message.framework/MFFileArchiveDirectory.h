
@interface MFFileArchiveDirectory : NSObject {
    NSData * _contents;
    NSMutableDictionary * _entries;
    NSError * _error;
    MFFileArchiveEntry * _mainEntry;
    NSMutableDictionary * _scrubbedEntries;
    NSURL * _url;
}

@property (nonatomic, retain) NSData *contents;
@property (nonatomic, readonly, retain) NSError *error;
@property (nonatomic, retain) NSURL *url;

+ (struct CentralDirectory { unsigned char x1[4]; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned int x6; unsigned int x7; unsigned short x8; }*)_centralDirectory:(id)arg1;
+ (struct CentralHeader { unsigned char x1[4]; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned short x6; unsigned short x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned short x12; unsigned short x13; unsigned short x14; unsigned short x15; unsigned short x16; unsigned int x17; unsigned int x18; char *x19; }*)_centralHeader:(id)arg1;
+ (id)_entriesFromCentralDictionary:(struct CentralDirectory { unsigned char x1[4]; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned int x6; unsigned int x7; unsigned short x8; }*)arg1 inData:(id)arg2 archiveData:(id)arg3;
+ (bool)_hasZipSignature:(id)arg1;
+ (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeOfCentralDirectory:(long long)arg1;
+ (id)archiveDirectory;
+ (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfCentralDirectoryInData:(id)arg1;

- (void).cxx_destruct;
- (void)_scrubContentDirectory;
- (id)archiveEntries;
- (id)contents;
- (id)description;
- (id)error;
- (bool)inputWithData:(id)arg1;
- (bool)inputWithURL:(id)arg1;
- (id)mainEntry;
- (id)scrubbedArchiveEntries;
- (bool)setArchiveEntry:(id)arg1;
- (void)setContents:(id)arg1;
- (void)setMainEntry:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

@end