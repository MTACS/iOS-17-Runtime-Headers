
@interface STKCallSetupSessionData : STKTextSessionData {
    bool  _isHighPriority;
    NSString * _phoneNumber;
}

@property (nonatomic, readonly) bool isHighPriority;
@property (nonatomic, readonly, copy) NSString *phoneNumber;

- (void).cxx_destruct;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithText:(id)arg1 simLabel:(id)arg2 phoneNumber:(id)arg3;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isHighPriority;
- (id)phoneNumber;

@end
