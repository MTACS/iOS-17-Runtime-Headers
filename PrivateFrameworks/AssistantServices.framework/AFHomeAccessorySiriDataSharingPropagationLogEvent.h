
@interface AFHomeAccessorySiriDataSharingPropagationLogEvent : NSObject <AFDictionaryConvertible, NSCopying, NSSecureCoding> {
    NSString * _accessoryIdentifier;
    NSString * _associatedChangeLogEventIdentifier;
    NSDate * _date;
    long long  _propagationEvent;
    NSString * _propagationEventReason;
}

@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (nonatomic, readonly, copy) NSString *associatedChangeLogEventIdentifier;
@property (nonatomic, readonly, copy) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long propagationEvent;
@property (nonatomic, readonly, copy) NSString *propagationEventReason;
@property (readonly) Class superclass;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)accessoryIdentifier;
- (id)associatedChangeLogEventIdentifier;
- (id)buildDictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1 accessoryIdentifier:(id)arg2 propagationEvent:(long long)arg3 propagationEventReason:(id)arg4 associatedChangeLogEventIdentifier:(id)arg5;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;
- (long long)propagationEvent;
- (id)propagationEventReason;

@end
