
@interface INPrivateSearchForMediaIntentData : NSObject <INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding> {
    NSNumber * _appInferred;
    NSArray * _audioSearchResults;
    NSArray * _internalSignals;
    INPrivateMediaIntentData * _privateMediaIntentData;
}

@property (nonatomic, readonly, copy) NSNumber *appInferred;
@property (nonatomic, readonly, copy) NSArray *audioSearchResults;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *internalSignals;
@property (nonatomic, readonly, copy) INPrivateMediaIntentData *privateMediaIntentData;
@property (readonly) Class superclass;

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_intents_cacheableObjects;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (void)_intents_updateContainerWithCache:(id)arg1;
- (id)appInferred;
- (id)audioSearchResults;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAudioSearchResults:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPrivateMediaIntentData:(id)arg1 audioSearchResults:(id)arg2;
- (id)initWithPrivateMediaIntentData:(id)arg1 audioSearchResults:(id)arg2 internalSignals:(id)arg3;
- (id)initWithPrivateMediaIntentData:(id)arg1 audioSearchResults:(id)arg2 internalSignals:(id)arg3 appInferred:(id)arg4;
- (id)internalSignals;
- (bool)isEqual:(id)arg1;
- (id)privateMediaIntentData;

@end
