
@interface HAPNumberParser : HAPTLVDescription {
    unsigned long long  _decodedNumber;
}

@property (nonatomic, readonly) unsigned long long decodedNumber;

- (unsigned long long)decodedNumber;
- (id)initWithTLVData:(id)arg1;

@end
