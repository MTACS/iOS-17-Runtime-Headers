
@interface AUAudioUnitPreset : NSObject <NSSecureCoding> {
    NSString * _name;
    long long  _number;
}

@property (nonatomic, copy) NSString *name;
@property (nonatomic) long long number;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)name;
- (long long)number;
- (void)setName:(id)arg1;
- (void)setNumber:(long long)arg1;

@end
