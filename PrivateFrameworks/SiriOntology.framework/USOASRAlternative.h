
@interface USOASRAlternative : NSObject <NSSecureCoding> {
    NSNumber * _probability;
    NSString * _value;
}

@property (nonatomic, readonly) NSNumber *probability;
@property (nonatomic, readonly) NSString *value;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithValue:(id)arg1;
- (id)initWithValue:(id)arg1 probability:(float)arg2;
- (id)probability;
- (id)value;

@end
