
@interface PKPaymentInstructions : NSObject {
    NSData * _fortifiedInstructionsData;
    NSData * _fortifiedSignatureData;
    NSData * _instructionsData;
    NSDictionary * _instructionsDictionary;
    NSData * _signatureData;
    long long  _version;
}

@property (nonatomic, readonly) NSArray *allImageKeys;
@property (nonatomic, retain) NSData *fortifiedInstructionsData;
@property (nonatomic, retain) NSData *fortifiedSignatureData;
@property (nonatomic, retain) NSData *instructionsData;
@property (nonatomic, retain) NSDictionary *instructionsDictionary;
@property (nonatomic, retain) NSData *signatureData;
@property (nonatomic, readonly) long long version;

- (void).cxx_destruct;
- (struct CGDataProvider { }*)_createImageDataProviderForImageKey:(id)arg1;
- (id)_imageDataForImageWithKey:(id)arg1 format:(id*)arg2;
- (void)_pruneDirectoryAtURL:(id)arg1;
- (id)allImageKeys;
- (bool)archiveToDirectoryAtURL:(id)arg1 error:(id*)arg2;
- (id)description;
- (id)fortifiedInstructionsData;
- (id)fortifiedSignatureData;
- (struct CGImage { }*)imageForKey:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)instructionsData;
- (id)instructionsDictionary;
- (void)setFortifiedInstructionsData:(id)arg1;
- (void)setFortifiedSignatureData:(id)arg1;
- (void)setInstructionsData:(id)arg1;
- (void)setInstructionsDictionary:(id)arg1;
- (void)setSignatureData:(id)arg1;
- (id)signatureData;
- (long long)version;

@end
