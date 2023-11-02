
@interface ContactAttribute : INObject

@property (nonatomic, retain) AgeDateTime *ageDateTime;
@property (nonatomic) long long contactAttributeType;
@property (nonatomic, copy) NSString *handleLabel;
@property (nonatomic, copy) NSString *handleValue;
@property (nonatomic, retain) PostalAddress *postalAddress;

+ (bool)supportsSecureCoding;

- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 displayString:(id)arg2 pronunciationHint:(id)arg3;

@end
