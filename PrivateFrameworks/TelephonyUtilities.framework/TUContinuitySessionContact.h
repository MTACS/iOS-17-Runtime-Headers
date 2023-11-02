
@interface TUContinuitySessionContact : NSObject <NSSecureCoding> {
    NSSet * _anonyms;
    CNContact * _contact;
    NSString * _contactIdentifier;
}

@property (nonatomic, readonly) NSSet *anonyms;
@property (nonatomic, readonly) CNContact *contact;
@property (nonatomic, readonly) NSString *contactIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)anonyms;
- (id)contact;
- (id)contactIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContact:(id)arg1 contactIdentifier:(id)arg2 anonyms:(id)arg3;

@end
