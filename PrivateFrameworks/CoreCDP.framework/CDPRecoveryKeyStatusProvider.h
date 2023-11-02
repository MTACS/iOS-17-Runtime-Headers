
@interface CDPRecoveryKeyStatusProvider : NSObject {
    CDPContext * _context;
}

- (void).cxx_destruct;
- (bool)idmsHasRK;
- (id)initWithContext:(id)arg1;
- (bool)isRecoveryKeySetInOctagonWithError:(id*)arg1;
- (bool)isRecoveryKeySetInSOSWithError:(id*)arg1;

@end
