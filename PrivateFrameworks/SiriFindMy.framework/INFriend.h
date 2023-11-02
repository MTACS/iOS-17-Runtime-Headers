
@interface INFriend : INObject

@property (nonatomic, retain) NSNumber *followsMyLocation;
@property (nonatomic, retain) INPerson *person;
@property (nonatomic, retain) NSNumber *sharesLocation;

+ (bool)supportsSecureCoding;

- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 displayString:(id)arg2 pronunciationHint:(id)arg3;

@end
