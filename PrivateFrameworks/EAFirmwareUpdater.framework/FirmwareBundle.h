
@interface FirmwareBundle : NSObject {
    NSDictionary * _buildManifest;
    NSString * _bundleDescription;
    NSData * _certificate;
    NSFileHandle * _firmwareFilehandle;
    NSData * _firmwareImage;
    unsigned int  _firmwareImageBaseAddress;
    unsigned int  _firmwareImageSize;
    NSURL * _firmwareLocalURL;
    NSData * _hash;
    unsigned int  _productIDCode;
    NSData * _signature;
}

@property (nonatomic, retain) NSDictionary *buildManifest;
@property (readonly) NSData *certificate;
@property (readonly) NSData *firmwareImage;
@property (readonly) unsigned int firmwareImageBaseAddress;
@property (readonly) unsigned int firmwareImageSize;
@property (readonly) NSURL *firmwareLocalURL;
@property (readonly) NSData *hash;
@property unsigned int productIDCode;
@property (readonly) NSData *signature;

+ (id)defaultBundlePath;

- (id)buildManifest;
- (void)calculateHash;
- (id)certificate;
- (void)dealloc;
- (id)description;
- (id)firmwareImage;
- (unsigned int)firmwareImageBaseAddress;
- (unsigned int)firmwareImageSize;
- (id)firmwareLocalURL;
- (id)getFirmwareDataInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 error:(id*)arg2;
- (id)hash;
- (id)initWithBundle:(id)arg1;
- (id)initWithBundleName:(id)arg1;
- (id)initWithBundlePath:(id)arg1;
- (id)initWithData:(id)arg1 hashData:(id)arg2 signatureData:(id)arg3 certData:(id)arg4;
- (id)initWithURL:(id)arg1 hashData:(id)arg2 signatureData:(id)arg3 certData:(id)arg4;
- (void)loadFirmwareImage;
- (void)parseFileName:(id)arg1 intoPath:(id*)arg2 andExtension:(id*)arg3;
- (id)parseMSP430TXTFile:(id)arg1 withDefaultByteValue:(unsigned char)arg2;
- (id)parseResourceFileIntoData:(id)arg1;
- (id)parseSRECFile:(id)arg1 withDefaultByteValue:(unsigned char)arg2;
- (void)parseSRECLine:(id)arg1 intoImage:(id)arg2;
- (unsigned int)productIDCode;
- (void)setBuildManifest:(id)arg1;
- (void)setProductIDCode:(unsigned int)arg1;
- (id)signature;

@end
