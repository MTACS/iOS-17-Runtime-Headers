
@interface MRContentItem : NSObject <NSCopying> {
    NSString * _ancestorIdentifier;
    MRArtwork * _artwork;
    NSString * _associatedParticipantIdentifier;
    NSArray * _availableLanguageOptions;
    NSArray * _currentLanguageOptions;
    NSString * _identifier;
    NSString * _info;
    MRContentItemMetadata * _metadata;
    NSString * _parentIdentifier;
    NSString * _queueIdentifier;
    NSString * _requestIdentifier;
    NSArray * _sections;
}

@property (nonatomic, copy) NSString *ancestorIdentifier;
@property (nonatomic, retain) MRArtwork *artwork;
@property (nonatomic, copy) NSString *associatedParticipantIdentifier;
@property (nonatomic, copy) NSArray *availableLanguageOptions;
@property (nonatomic, copy) NSArray *currentLanguageOptions;
@property (nonatomic, readonly, copy) NSData *data;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryRepresentation;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *info;
@property (nonatomic, copy) MRContentItemMetadata *metadata;
@property (nonatomic, readonly, copy) NSDictionary *nowPlayingInfo;
@property (nonatomic, copy) NSString *parentIdentifier;
@property (nonatomic, copy) NSString *queueIdentifier;
@property (nonatomic, copy) NSString *requestIdentifier;
@property (nonatomic, copy) NSArray *sections;
@property (nonatomic, readonly) MRContentItem *skeleton;

+ (id)extractedIdentifierFromNowPlayingInfo:(id)arg1;
+ (id)mergeContentItems:(id)arg1;

- (void).cxx_destruct;
- (id)ancestorIdentifier;
- (id)artwork;
- (id)associatedParticipantIdentifier;
- (id)availableLanguageOptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentLanguageOptions;
- (id)data;
- (id)description;
- (id)dictionaryRepresentation;
- (id)identifier;
- (id)info;
- (id)initWithData:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithNowPlayingInfo:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEffectivelyEqual:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)metadata;
- (id)nowPlayingInfo;
- (id)parentIdentifier;
- (id)protobufWithEncoding:(long long)arg1;
- (id)queueIdentifier;
- (id)requestIdentifier;
- (id)sections;
- (void)setAncestorIdentifier:(id)arg1;
- (void)setArtwork:(id)arg1;
- (void)setAssociatedParticipantIdentifier:(id)arg1;
- (void)setAvailableLanguageOptions:(id)arg1;
- (void)setCurrentLanguageOptions:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInfo:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setNowPlayingInfo:(id)arg1 policy:(unsigned char)arg2 request:(id)arg3;
- (void)setParentIdentifier:(id)arg1;
- (void)setQueueIdentifier:(id)arg1;
- (void)setRequestIdentifier:(id)arg1;
- (void)setSections:(id)arg1;
- (id)skeleton;

@end
