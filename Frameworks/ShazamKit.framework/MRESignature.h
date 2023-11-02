
@interface MRESignature : NSObject {
    NSData * _signatureData;
    unsigned long long  _trackID;
}

@property (nonatomic, readonly) NSData *signatureData;
@property (nonatomic, readonly) unsigned long long trackID;

- (void)dealloc;
- (id)initWithSignatureData:(id)arg1 trackID:(unsigned long long)arg2;
- (id)signatureData;
- (unsigned long long)trackID;

@end
