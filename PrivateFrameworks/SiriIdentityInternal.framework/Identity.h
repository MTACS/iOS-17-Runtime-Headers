
@interface Identity : INObject

@property (nonatomic, retain) NSNumber *fullConfidence;
@property (nonatomic, retain) NSNumber *isIdentifiedOrUnsure;
@property (nonatomic, retain) NSNumber *isMultiUserContext;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *negativeName;
@property (nonatomic, copy) NSString *property;
@property (nonatomic, retain) NSNumber *setupInProgress;

+ (bool)supportsSecureCoding;

- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 displayString:(id)arg2 pronunciationHint:(id)arg3;

@end
