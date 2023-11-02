
@interface GDPersonViewPerson : GDPerson

@property (nonatomic, readonly) NSDateComponents *dateOfBirth;
@property (nonatomic, readonly) NSArray *emails;
@property (nonatomic, readonly) bool isFavorite;
@property (nonatomic, readonly) GDPersonNameComponents *nameComponents;
@property (nonatomic, readonly) NSArray *names;
@property (nonatomic, readonly) NSArray *phoneNumbers;
@property (nonatomic, readonly) long long type;

- (id)description;

@end
