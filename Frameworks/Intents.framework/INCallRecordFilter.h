
@interface INCallRecordFilter : NSObject <INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding> {
    long long  _callCapability;
    unsigned long long  _callTypes;
    NSArray * _participants;
    long long  _preferredCallProvider;
}

@property (nonatomic, readonly) long long callCapability;
@property (nonatomic, readonly) unsigned long long callTypes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *participants;
@property (nonatomic, readonly) long long preferredCallProvider;
@property (readonly) Class superclass;

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_intents_cacheableObjects;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (void)_intents_updateContainerWithCache:(id)arg1;
- (long long)callCapability;
- (unsigned long long)callTypes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithParticipants:(id)arg1 callTypes:(unsigned long long)arg2 callCapability:(long long)arg3;
- (id)initWithParticipants:(id)arg1 callTypes:(unsigned long long)arg2 callCapability:(long long)arg3 preferredCallProvider:(long long)arg4;
- (bool)isEqual:(id)arg1;
- (id)participants;
- (long long)preferredCallProvider;

@end
