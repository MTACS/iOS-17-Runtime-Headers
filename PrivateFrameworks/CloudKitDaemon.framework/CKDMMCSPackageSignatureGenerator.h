
@interface CKDMMCSPackageSignatureGenerator : NSObject {
    void * _generator;
    bool  _valid;
}

@property (nonatomic) void*generator;
@property (getter=isValid, nonatomic) bool valid;

- (char *)_finishGenerator;
- (id)dataByFinishingSignature;
- (void)dealloc;
- (void*)generator;
- (id)init;
- (bool)isValid;
- (void)setGenerator:(void*)arg1;
- (void)setValid:(bool)arg1;
- (void)updateWithData:(id)arg1;

@end
