
@interface REMContactRepresentation : NSObject <NSSecureCoding> {
    NSArray * _emails;
    NSArray * _phones;
}

@property (nonatomic, copy) NSArray *emails;
@property (nonatomic, copy) NSArray *phones;

+ (id)representationFromData:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)archivedData;
- (id)description;
- (id)emails;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPhones:(id)arg1 emails:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)matchesContactRepresentation:(id)arg1;
- (id)phones;
- (void)setEmails:(id)arg1;
- (void)setPhones:(id)arg1;

@end
