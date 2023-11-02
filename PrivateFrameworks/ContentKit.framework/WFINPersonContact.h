
@interface WFINPersonContact : WFContact {
    INPerson * _person;
}

@property (nonatomic, retain) INPerson *person;

+ (id)contactWithPerson:(id)arg1;
+ (id)objectWithWFSerializedRepresentation:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)INPersonRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithINPerson:(id)arg1;
- (id)person;
- (void)setPerson:(id)arg1;
- (id)wfName;
- (id)wfSerializedRepresentation;

@end
