
@interface NLPredictionInfo : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _contextLength;
    NSString * _prediction;
    NLProbabilityInfo * _probabilityInfo;
    NSArray * _tokenIDArray;
    void * _tokenIDs;
}

@property (nonatomic, readonly) unsigned long long contextLength;
@property (nonatomic, readonly, copy) NSString *prediction;
@property (nonatomic, readonly, copy) NLProbabilityInfo *probabilityInfo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)contextLength;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPrediction:(id)arg1 contextLength:(unsigned long long)arg2 probabilityInfo:(id)arg3;
- (id)initWithPrediction:(id)arg1 probabilityInfo:(id)arg2;
- (id)initWithPrediction:(id)arg1 tokenIDArray:(id)arg2 contextLength:(unsigned long long)arg3 probabilityInfo:(id)arg4;
- (id)initWithPrediction:(id)arg1 tokenIDs:(const unsigned int*)arg2 length:(unsigned long long)arg3 contextLength:(unsigned long long)arg4 probabilityInfo:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)prediction;
- (id)probabilityInfo;
- (id)tokenIDArray;
- (unsigned long long)tokenIDLength;
- (const unsigned int*)tokenIDs;

@end
