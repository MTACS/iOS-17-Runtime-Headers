
@interface ASCViewMetrics : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _instructions;
    NSDictionary * _pageFields;
}

@property (nonatomic, readonly, copy) NSArray *instructions;
@property (nonatomic, readonly, copy) NSDictionary *pageFields;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataForInvocationPoint:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithInstructions:(id)arg1 pageFields:(id)arg2;
- (id)instructions;
- (bool)isEqual:(id)arg1;
- (id)pageFields;

@end
