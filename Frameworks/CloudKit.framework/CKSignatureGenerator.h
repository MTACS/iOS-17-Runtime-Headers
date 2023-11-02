
@interface CKSignatureGenerator : NSObject {
    void * _generator;
    bool  _valid;
}

@property (nonatomic) void*generator;
@property (getter=isValid, nonatomic) bool valid;

+ (bool)isValidSignature:(id)arg1;
+ (bool)isValidV2Signature:(id)arg1;
+ (id)signatureForStreamingAsset;
+ (id)signatureWithFileDescriptor:(int)arg1 error:(id*)arg2;

- (char *)_newSignatureByFinishingGenerator;
- (id)dataByFinishingSignature;
- (void)dealloc;
- (void*)generator;
- (id)init;
- (id)initWithBoundaryKey:(id)arg1;
- (bool)isValid;
- (void)setGenerator:(void*)arg1;
- (void)setValid:(bool)arg1;
- (void)updateWithBytes:(const void*)arg1 length:(unsigned long long)arg2;
- (void)updateWithData:(id)arg1;

@end
