
@interface INTemporalEventTrigger : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {
    INDateComponentsRange * _dateComponentsRange;
}

@property (nonatomic, readonly, copy) INDateComponentsRange *dateComponentsRange;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (id)_intents_readableTitleWithLocalizer:(id)arg1 metadata:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateComponentsRange;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDateComponentsRange:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
