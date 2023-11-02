
@interface _DPHuffmanEncoder : NSObject {
    unsigned long long  _maxOutputBitLength;
    NSDictionary * _table;
    NSString * _tableUUID;
    NSNumber * _unknownTokenCode;
}

@property (nonatomic, readonly, copy) NSString *tableUUID;

+ (id)codeToBinaryString:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)encodeTokens:(id)arg1;
- (id)init;
- (id)initWithTableClassName:(id)arg1 maxOutputBitLength:(unsigned long long)arg2;
- (id)tableUUID;
- (bool)tokenExist:(id)arg1;

@end
