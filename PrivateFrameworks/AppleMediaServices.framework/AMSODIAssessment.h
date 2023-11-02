
@interface AMSODIAssessment : NSObject <NSCopying, NSSecureCoding> {
    NSString * _stringValue;
}

@property (nonatomic, readonly, copy) NSString *stringValue;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStringValue:(id)arg1;
- (id)stringValue;

@end
