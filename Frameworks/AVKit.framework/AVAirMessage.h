
@interface AVAirMessage : NSObject {
    NSString * _MIMEType;
    NSArray * _array;
    NSDictionary * _dictionary;
    NSString * _extendedLanguageTag;
    NSDictionary * _initialRepresentation;
    NSString * _itemIdentifier;
    NSData * _rawData;
    unsigned int  _type;
    NSValue * _value;
}

@property (nonatomic, copy) NSString *MIMEType;
@property (nonatomic, retain) NSArray *array;
@property (nonatomic, retain) NSDictionary *dictionary;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, copy) NSString *extendedLanguageTag;
@property (nonatomic, readonly) NSDictionary *initialRepresentation;
@property (nonatomic, copy) NSString *itemIdentifier;
@property (nonatomic, readonly) NSData *jsonDataRepresentation;
@property (nonatomic, retain) NSData *rawData;
@property (nonatomic, readonly) unsigned int type;
@property (nonatomic, retain) NSValue *value;

+ (id)_decompressBodyData:(id)arg1 forCompressionAlgorithm:(id)arg2;
+ (id)_nameForDataCompressionAlgorithm:(long long)arg1;
+ (id)buildVersion;
+ (id)commonDictionaryRepresentationKeys;
+ (id)currentAppIdentifier;
+ (id)currentOSIdentifier;
+ (id)dictionaryRepresentationCommon;
+ (bool)isAirMessagingEnabled;
+ (id)messageWithExternalMetadata:(id)arg1 itemIdentifier:(id)arg2;
+ (id)messageWithParts:(id)arg1;
+ (id)messageWithPosterArtworkMetadata:(id)arg1 itemIdentifier:(id)arg2;
+ (id)messageWithRequiresLinearPlayback:(bool)arg1 itemIdentifier:(id)arg2;
+ (id)messageWithUserScrubToAssetTime:(double)arg1 itemIdentifier:(id)arg2;

- (void).cxx_destruct;
- (id)MIMEType;
- (id)allRecognizedKeysForDictionaryRepresentation;
- (id)array;
- (id)description;
- (id)dictionary;
- (id)dictionaryRepresentation;
- (id)extendedLanguageTag;
- (id)headerTextRepresenationForBodyDataLength:(unsigned long long)arg1 extraHeaders:(id)arg2;
- (id)initWithMessageType:(unsigned int)arg1 itemIdentifier:(id)arg2;
- (id)initWithMessageType:(unsigned int)arg1 itemIdentifier:(id)arg2 dictionaryRepresentation:(id)arg3;
- (id)initialRepresentation;
- (id)itemIdentifier;
- (id)jsonDataRepresentation;
- (id)messageDataRepresentation;
- (id)number;
- (id)rawData;
- (void)setArray:(id)arg1;
- (void)setDictionary:(id)arg1;
- (void)setExtendedLanguageTag:(id)arg1;
- (void)setItemIdentifier:(id)arg1;
- (void)setMIMEType:(id)arg1;
- (void)setRawData:(id)arg1;
- (void)setValue:(id)arg1;
- (bool)shouldUseJSONForBody;
- (unsigned int)type;
- (id)value;

@end
