
@interface SignpostSupportCompositorInterval : SignpostAnimationSubInterval <SignpostSerializable> {
    NSArray * _contributingPids;
}

@property (nonatomic, retain) NSArray *contributingPids;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)serializationTypeNumber;

- (void).cxx_destruct;
- (id)contributingPids;
- (unsigned long long)hash;
- (id)humanReadableDictionaryRepresentation;
- (id)humanReadableType;
- (id)initWithDictionary:(id)arg1;
- (id)initWithStartContinuousTime:(unsigned long long)arg1 endContinuousTime:(unsigned long long)arg2 timebaseRatio:(double)arg3 contributingPids:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSignpostSupportCompositorInterval:(id)arg1;
- (id)serializeableDictionaryWithShouldRedact:(bool)arg1;
- (void)setContributingPids:(id)arg1;

@end