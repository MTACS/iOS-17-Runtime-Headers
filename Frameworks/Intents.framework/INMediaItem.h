
@interface INMediaItem : NSObject <CMSCoding, INCacheableContainer, INImageProxyInjecting, INJSONSerializable, INKeyImageProducing, NSCopying, NSSecureCoding, REDonatedActionIdentifierProviding> {
    NSString * _artist;
    INImage * _artwork;
    NSString * _assetInfo;
    NSString * _identifier;
    NSDictionary * _namedEntities;
    INPrivateMediaItemValueData * _privateMediaItemValueData;
    NSString * _title;
    NSDictionary * _topics;
    long long  _type;
}

@property (readonly) INImage *_keyImage;
@property (nonatomic, readonly, copy) NSString *artist;
@property (nonatomic, copy) INImage *artwork;
@property (nonatomic, readonly, copy) NSString *assetInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSDictionary *namedEntities;
@property (nonatomic, copy) INPrivateMediaItemValueData *privateMediaItemValueData;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly, copy) NSDictionary *topics;
@property (nonatomic, readonly) long long type;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2;
- (id)_dictionaryRepresentation;
- (void)_injectProxiesForImages:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)_intents_cacheableObjects;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (id)_intents_readableTitleWithLocalizer:(id)arg1 metadata:(id)arg2;
- (void)_intents_updateContainerWithCache:(id)arg1;
- (id)_keyImage;
- (id)artist;
- (id)artwork;
- (id)assetInfo;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 type:(long long)arg3 artwork:(id)arg4;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 type:(long long)arg3 artwork:(id)arg4 artist:(id)arg5;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 type:(long long)arg3 artwork:(id)arg4 artist:(id)arg5 topics:(id)arg6 namedEntities:(id)arg7;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 type:(long long)arg3 artwork:(id)arg4 artist:(id)arg5 topics:(id)arg6 namedEntities:(id)arg7 assetInfo:(id)arg8;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 type:(long long)arg3 artwork:(id)arg4 artist:(id)arg5 topics:(id)arg6 namedEntities:(id)arg7 privateMediaItemValueData:(id)arg8;
- (bool)isEqual:(id)arg1;
- (id)namedEntities;
- (id)privateMediaItemValueData;
- (void)setArtwork:(id)arg1;
- (void)setPrivateMediaItemValueData:(id)arg1;
- (id)spokenPhrase;
- (id)title;
- (id)topics;
- (long long)type;

// Image: /System/Library/PrivateFrameworks/CloudMediaServicesInterfaceKit.framework/CloudMediaServicesInterfaceKit

+ (id)instanceFromCMSCoded:(id)arg1;

- (id)cmsCoded;

// Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine

- (unsigned long long)re_actionIdentifierHashValue;

@end
