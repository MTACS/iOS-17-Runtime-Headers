
@interface TVRCPINEntryAttributes : NSObject <NSSecureCoding> {
    NSArray * _groupLengths;
}

@property (nonatomic, readonly) unsigned long long numberOfDigitGroups;
@property (nonatomic, readonly) unsigned long long totalDigitCount;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDigitCount:(unsigned long long)arg1;
- (id)initWithGroupLengths:(id)arg1;
- (unsigned long long)numberOfDigitGroups;
- (unsigned long long)numberOfDigitsInGroup:(unsigned long long)arg1;
- (unsigned long long)totalDigitCount;

@end
