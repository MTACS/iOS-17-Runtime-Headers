
@interface FSTaskOption : NSObject <NSSecureCoding> {
    bool  _hasValue;
    NSString * _option;
    NSString * _optionValue;
}

@property (readonly) bool hasValue;
@property (readonly, retain) NSString *option;
@property (readonly, retain) NSString *optionValue;

+ (id)newOption:(id)arg1 value:(id)arg2;
+ (id)newOptionWithoutValue:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasValue;
- (id)initWithCoder:(id)arg1;
- (id)initWithOption:(id)arg1 value:(id)arg2 hasValue:(bool)arg3;
- (id)option;
- (id)optionValue;

@end
