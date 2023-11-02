
@interface _DPBSFPWithOHEResult : NSObject {
    NSString * _privatizedString;
    unsigned long long  _segmentIndex;
    bool  _verificationMode;
}

@property (nonatomic, readonly, copy) NSString *privatizedString;
@property (nonatomic, readonly) unsigned long long segmentIndex;
@property (nonatomic, readonly) bool verificationMode;

- (void).cxx_destruct;
- (id)init;
- (id)initWithBitString:(id)arg1 segmentIndex:(unsigned long long)arg2 verificationMode:(bool)arg3;
- (id)privatizedString;
- (unsigned long long)segmentIndex;
- (bool)verificationMode;

@end
