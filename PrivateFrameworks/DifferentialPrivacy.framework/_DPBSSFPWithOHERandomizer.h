
@interface _DPBSSFPWithOHERandomizer : NSObject <_DPStringRandomizer> {
    _DPBSFPWithOHE * _bssfpWOHE;
    bool  _hasHuffmanTable;
    _DPHuffmanEncoder * _huffmanEncoder;
    NSString * _huffmanTableClassNamePattern;
    bool  _isLocalizable;
    unsigned long long  _maxRecordBitLength;
}

@property (nonatomic, readonly) _DPBSFPWithOHE *bssfpWOHE;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasHuffmanTable;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) _DPHuffmanEncoder *huffmanEncoder;
@property (nonatomic, readonly) NSString *huffmanTableClassNamePattern;
@property (nonatomic, readonly) bool isLocalizable;
@property (nonatomic, readonly) unsigned long long maxRecordBitLength;
@property (readonly) Class superclass;

+ (id)extractLocaleFromKey:(id)arg1;
+ (id)extractSortedTokensFromWordsArray:(id)arg1;
+ (id)randomizerWithEpsilon:(double)arg1 maxRecordBitLength:(unsigned long long)arg2 segmentBitLength:(unsigned long long)arg3 probabilityOfVerification:(double)arg4 hashSeed:(unsigned long long)arg5 hashSeedInVerification:(unsigned long long)arg6 signatureBitLength:(unsigned long long)arg7 signatureBitLengthInVerification:(unsigned long long)arg8 huffmanTableClassName:(id)arg9;

- (void).cxx_destruct;
- (id)bitStringFromEncodedTokens:(id)arg1;
- (id)bssfpWOHE;
- (bool)hasHuffmanTable;
- (id)huffmanEncoder;
- (id)huffmanTableClassNamePattern;
- (id)init;
- (id)initWithEpsilon:(double)arg1 maxRecordBitLength:(unsigned long long)arg2 segmentBitLength:(unsigned long long)arg3 probabilityOfVerification:(double)arg4 hashSeed:(unsigned long long)arg5 hashSeedInVerification:(unsigned long long)arg6 signatureBitLength:(unsigned long long)arg7 signatureBitLengthInVerification:(unsigned long long)arg8 huffmanTableClassName:(id)arg9;
- (void)instantiateLocalizedHuffmanTable:(id)arg1;
- (bool)isLocalizable;
- (unsigned long long)maxRecordBitLength;
- (id)randomize:(id)arg1 forKey:(id)arg2;
- (id)randomizeBitString:(id)arg1 huffmanVersion:(id)arg2 forKey:(id)arg3;
- (id)randomizeBitValues:(id)arg1 forKey:(id)arg2;
- (id)randomizeEncodedTokens:(id)arg1 huffmanVersion:(id)arg2 forKey:(id)arg3;
- (id)randomizeNumbers:(id)arg1 metadata:(id)arg2 forKey:(id)arg3;
- (id)randomizeNumbersVectors:(id)arg1 metadata:(id)arg2 forKey:(id)arg3;
- (id)randomizeStrings:(id)arg1 forKey:(id)arg2;
- (id)randomizeWords:(id)arg1 fragmentWidth:(unsigned long long)arg2 forKey:(id)arg3;

@end
