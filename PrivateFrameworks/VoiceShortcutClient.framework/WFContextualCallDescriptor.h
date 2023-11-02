
@interface WFContextualCallDescriptor : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _callType;
    <WFPropertyListObject> * _callTypeSerializedRepresentation;
    NSString * _handle;
    INPerson * _person;
    <WFPropertyListObject> * _personSerializedRepresentation;
}

@property (nonatomic, readonly) unsigned long long callType;
@property (nonatomic, readonly) <WFPropertyListObject> *callTypeSerializedRepresentation;
@property (nonatomic, readonly, copy) NSString *handle;
@property (nonatomic, readonly) INPerson *person;
@property (nonatomic, readonly) <WFPropertyListObject> *personSerializedRepresentation;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)callType;
- (id)callTypeSerializedRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)handle;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithHandle:(id)arg1 callType:(unsigned long long)arg2 person:(id)arg3 callTypeSerializedRepresentation:(id)arg4 personSerializedRepresentation:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)person;
- (id)personSerializedRepresentation;

@end
