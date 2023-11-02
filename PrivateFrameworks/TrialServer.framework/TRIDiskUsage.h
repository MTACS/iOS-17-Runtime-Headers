
@interface TRIDiskUsage : NSObject <NSCopying> {
    unsigned long long  _compressedSum;
    unsigned long long  _deduplicatedSum;
    unsigned long long  _naiveSum;
}

@property (nonatomic, readonly) unsigned long long compressedSum;
@property (nonatomic, readonly) unsigned long long deduplicatedSum;
@property (nonatomic, readonly) unsigned long long naiveSum;

+ (id)usageWithNaiveSum:(unsigned long long)arg1 deduplicatedSum:(unsigned long long)arg2 compressedSum:(unsigned long long)arg3;

- (unsigned long long)compressedSum;
- (id)copyWithReplacementCompressedSum:(unsigned long long)arg1;
- (id)copyWithReplacementDeduplicatedSum:(unsigned long long)arg1;
- (id)copyWithReplacementNaiveSum:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)deduplicatedSum;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithNaiveSum:(unsigned long long)arg1 deduplicatedSum:(unsigned long long)arg2 compressedSum:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToUsage:(id)arg1;
- (unsigned long long)naiveSum;

@end
