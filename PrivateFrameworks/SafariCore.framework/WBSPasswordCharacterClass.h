
@interface WBSPasswordCharacterClass : NSObject {
    long long  _type;
    NSString * _value;
}

@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly, copy) NSString *value;

+ (id)asciiPrintableCharacterClass;
+ (id)customCharacterClassWithValue:(id)arg1;
+ (id)digitCharacterClass;
+ (id)lowercaseCharacterClass;
+ (id)namedCharacterClassWithType:(long long)arg1;
+ (id)specialCharacterClass;
+ (id)unicodeCharacterClass;
+ (id)uppercaseCharacterClass;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithType:(long long)arg1 value:(id)arg2;
- (bool)isEqual:(id)arg1;
- (long long)type;
- (id)value;

@end
