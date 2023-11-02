
@interface OSLogMessageComponent : NSObject <NSSecureCoding> {
    long long  _argumentCategory;
    NSData * _argumentDataValue;
    double  _argumentDoubleValue;
    long long  _argumentInt64Value;
    NSNumber * _argumentNumberValue;
    NSString * _argumentStringValue;
    unsigned long long  _argumentUInt64Value;
    NSString * _formatSubstring;
    NSString * _placeholder;
}

@property (nonatomic, readonly) long long argumentCategory;
@property (nonatomic, copy) NSData *argumentDataValue;
@property (nonatomic, readonly) double argumentDoubleValue;
@property (nonatomic, readonly) long long argumentInt64Value;
@property (nonatomic, copy) NSNumber *argumentNumberValue;
@property (nonatomic, copy) NSString *argumentStringValue;
@property (nonatomic, readonly) unsigned long long argumentUInt64Value;
@property (nonatomic, copy) NSString *formatSubstring;
@property (nonatomic, copy) NSString *placeholder;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)argumentCategory;
- (id)argumentDataValue;
- (double)argumentDoubleValue;
- (long long)argumentInt64Value;
- (id)argumentNumberValue;
- (id)argumentStringValue;
- (unsigned long long)argumentUInt64Value;
- (void)encodeWithCoder:(id)arg1;
- (void)fillWithData:(id)arg1;
- (void)fillWithScalar:(id)arg1;
- (void)fillWithString:(id)arg1;
- (id)formatSubstring;
- (id)initWithCoder:(id)arg1;
- (id)initWithDecomposedMessage:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)placeholder;
- (void)setArgumentDataValue:(id)arg1;
- (void)setArgumentNumberValue:(id)arg1;
- (void)setArgumentStringValue:(id)arg1;
- (void)setFormatSubstring:(id)arg1;
- (void)setPlaceholder:(id)arg1;

@end
