
@interface PKApplicationMessageGroupDescriptor : NSObject <NSCopying, NSSecureCoding> {
    NSString * _identifier;
    NSString * _pluralSummary;
    NSString * _singularSummary;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *pluralSummary;
@property (nonatomic, readonly) NSString *singularSummary;

+ (id)createForIdentifier:(id)arg1 withSingularSummary:(id)arg2 pluralSummary:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)pluralSummary;
- (id)singularSummary;

@end
