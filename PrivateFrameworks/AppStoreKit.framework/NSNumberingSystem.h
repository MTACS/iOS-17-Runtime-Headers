
@interface NSNumberingSystem : NSObject {
    NSString * _descriptor;
    NSString * _identifier;
    bool  _isAlgorithmic;
    long long  _radix;
}

@property (copy) NSString *descriptor;
@property (copy) NSString *identifier;
@property bool isAlgorithmic;
@property long long radix;

+ (id)numberingSystemWithNumberingSystemName:(const char *)arg1;

- (void).cxx_destruct;
- (id)descriptor;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1 isAlgorithmic:(bool)arg2 radix:(long long)arg3 descriptor:(id)arg4;
- (id)initWithLocaleIdentifier:(id)arg1;
- (id)initWithNumberingSystemIdentifier:(id)arg1;
- (bool)isAlgorithmic;
- (bool)isEqual:(id)arg1;
- (long long)radix;
- (void)setDescriptor:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsAlgorithmic:(bool)arg1;
- (void)setRadix:(long long)arg1;

@end
