
@interface CKVMatchingSpan : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _beginIndex;
    unsigned long long  _endIndex;
    NSString * _itemId;
    CKVMatchingSpanMetadata * _metadata;
    USOGraph * _ontologyGraph;
    NSString * _ontologyLabel;
    NSString * _originAppId;
    float  _score;
    NSString * _semanticValue;
    KVSpanMatchResult * _spanMatchResult;
}

@property (nonatomic, readonly) unsigned long long beginIndex;
@property (nonatomic, readonly) unsigned long long endIndex;
@property (nonatomic, readonly) NSString *itemId;
@property (nonatomic, readonly) CKVMatchingSpanMetadata *metadata;
@property (nonatomic, readonly) USOGraph *ontologyGraph;
@property (nonatomic, readonly) NSString *ontologyLabel;
@property (nonatomic, readonly) NSString *originAppId;
@property (nonatomic, readonly) float score;
@property (nonatomic, readonly) NSString *semanticValue;
@property (nonatomic, readonly) KVSpanMatchResult *spanMatchResult;

+ (id)matchingSpanFromSpanMatchResult:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)beginIndex;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)endIndex;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSpanMatchResult:(id)arg1 ontologyGraph:(id)arg2 ontologyLabel:(id)arg3 semanticValue:(id)arg4 beginIndex:(unsigned long long)arg5 endIndex:(unsigned long long)arg6 itemId:(id)arg7 originAppId:(id)arg8 score:(float)arg9 matchScore:(float)arg10 priorInfo:(id)arg11;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToMatchingSpan:(id)arg1;
- (id)itemId;
- (id)metadata;
- (id)ontologyGraph;
- (id)ontologyGraphData:(id*)arg1;
- (id)ontologyLabel;
- (id)originAppId;
- (float)score;
- (id)semanticValue;
- (id)spanMatchResult;

@end
