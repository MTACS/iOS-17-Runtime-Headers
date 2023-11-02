
@interface INReservationAction : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {
    long long  _type;
    NSUserActivity * _userActivity;
    INDateComponentsRange * _validDuration;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly, copy) NSUserActivity *userActivity;
@property (nonatomic, readonly, copy) INDateComponentsRange *validDuration;

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 validDuration:(id)arg2 userActivity:(id)arg3;
- (bool)isEqual:(id)arg1;
- (long long)type;
- (id)userActivity;
- (id)validDuration;

@end
