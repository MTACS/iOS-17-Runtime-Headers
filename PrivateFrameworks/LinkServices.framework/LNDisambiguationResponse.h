
@interface LNDisambiguationResponse : NSObject <NSSecureCoding> {
    NSUUID * _identifier;
    NSNumber * _selectedIndex;
    LNValue * _value;
}

@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) NSNumber *selectedIndex;
@property (nonatomic, readonly) LNValue *value;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 selectedIndex:(id)arg2 value:(id)arg3;
- (id)selectedIndex;
- (id)value;

@end
