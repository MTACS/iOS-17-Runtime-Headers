
@interface MRPlaybackQueue : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _contentItems;
    _MRPlaybackQueueContextProtobuf * _context;
    bool  _hasLocation;
    NSSet * _homeUserIdentifiers;
    long long  _location;
    NSArray * _participants;
    NSString * _queueIdentifier;
    NSString * _requestIdentifier;
    MRPlayerPath * _resolvedPlayerPath;
}

@property (nonatomic, readonly, copy) NSArray *contentItemIdentifiers;
@property (nonatomic, copy) NSArray *contentItems;
@property (nonatomic, readonly, copy) NSData *data;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryRepresentation;
@property (nonatomic) bool hasLocation;
@property (nonatomic, copy) NSSet *homeUserIdentifiers;
@property (nonatomic) long long location;
@property (nonatomic, readonly, copy) NSString *minimalReadableDescription;
@property (nonatomic, copy) NSArray *participants;
@property (nonatomic, copy) NSString *queueIdentifier;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (nonatomic, copy) NSString *requestIdentifier;
@property (nonatomic, retain) MRPlayerPath *resolvedPlayerPath;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contentItemForIdentifier:(id)arg1;
- (id)contentItemIdentifiers;
- (id)contentItemWithOffset:(unsigned long long)arg1;
- (id)contentItems;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasLocation;
- (id)homeUserIdentifiers;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentItem:(id)arg1;
- (id)initWithContentItems:(id)arg1;
- (id)initWithContentItems:(id)arg1 location:(unsigned long long)arg2;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)location;
- (void)mergeFrom:(id)arg1;
- (id)minimalReadableDescription;
- (id)participantForIdentifier:(id)arg1;
- (id)participants;
- (id)queueIdentifier;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (id)requestIdentifier;
- (id)resolvedPlayerPath;
- (void)setContentItems:(id)arg1;
- (void)setHasLocation:(bool)arg1;
- (void)setHomeUserIdentifiers:(id)arg1;
- (void)setLocation:(long long)arg1;
- (void)setParticipants:(id)arg1;
- (void)setQueueIdentifier:(id)arg1;
- (void)setRequestIdentifier:(id)arg1;
- (void)setResolvedPlayerPath:(id)arg1;

@end
