
@interface INFileProperty : NSObject <INFilePropertyExport, NSCopying, NSSecureCoding> {
    INDateComponentsRange * _dateComponentsRange;
    NSString * _name;
    INPerson * _person;
    NSString * _qualifier;
    NSNumber * _quantity;
    NSString * _type;
    NSString * _value;
}

@property (nonatomic, readonly, copy) INDateComponentsRange *dateComponentsRange;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) INPerson *person;
@property (nonatomic, readonly, copy) NSString *qualifier;
@property (nonatomic, readonly, copy) NSNumber *quantity;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *type;
@property (nonatomic, readonly, copy) NSString *value;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateComponentsRange;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 qualifier:(id)arg2 type:(id)arg3 dateComponentsRange:(id)arg4 person:(id)arg5 value:(id)arg6 quantity:(id)arg7;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)person;
- (id)qualifier;
- (id)quantity;
- (id)type;
- (id)value;

@end
