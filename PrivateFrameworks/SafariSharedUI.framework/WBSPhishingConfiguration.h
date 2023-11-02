
@interface WBSPhishingConfiguration : NSObject <WBSRemotePlistSnapshot> {
    NSDictionary * _domains;
    NSDictionary * _imageClassifierIdentifiers;
    unsigned long long  _imageCropAndScaleOption;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageInputSize;
    NSArray * _overrides;
    NSString * _version;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long imageCropAndScaleOption;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } imageInputSize;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *version;

- (void).cxx_destruct;
- (bool)_parseDomains:(id)arg1 error:(id*)arg2;
- (bool)_parseImageClassifierIdentifiers:(id)arg1 error:(id*)arg2;
- (bool)_parseOverrides:(id)arg1 error:(id*)arg2;
- (id)_sanitizeURL:(id)arg1;
- (unsigned long long)classifyURL:(id)arg1 error:(id*)arg2;
- (unsigned long long)classifyURL:(id)arg1 imageClassifierIdentifier:(id)arg2 imageClassifierConfidence:(float)arg3 error:(id*)arg4;
- (id)dictionaryRepresentation;
- (unsigned long long)imageCropAndScaleOption;
- (struct CGSize { double x1; double x2; })imageInputSize;
- (id)initWithDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithPlistData:(id)arg1 error:(id*)arg2;
- (id)plistDataWithFormat:(unsigned long long)arg1;
- (id)version;

@end
