
@interface ATXSharedDigestEngagementTrackingMetrics : NSObject <ATXJSONSerializableProtocol, ATXProtoBufWrapper, NSCopying, NSSecureCoding> {
    unsigned long long  _numDigestExpansions;
    unsigned long long  _numEngagementsAfterExpiration;
    unsigned long long  _numEngagementsInScheduled;
    unsigned long long  _numEngagementsInUpcoming;
    unsigned long long  _numExpansions;
    NSString * _sectionIdentifier;
    unsigned long long  _sectionPosition;
    unsigned long long  _sectionSize;
}

@property (nonatomic) unsigned long long numDigestExpansions;
@property (nonatomic) unsigned long long numEngagementsAfterExpiration;
@property (nonatomic) unsigned long long numEngagementsInScheduled;
@property (nonatomic) unsigned long long numEngagementsInUpcoming;
@property (nonatomic) unsigned long long numExpansions;
@property (nonatomic, copy) NSString *sectionIdentifier;
@property (nonatomic) unsigned long long sectionPosition;
@property (nonatomic) unsigned long long sectionSize;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addMetricsFromOtherTracker:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (id)initFromJSON:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXSharedDigestEngagementTrackingMetrics:(id)arg1;
- (id)json;
- (id)jsonDict;
- (id)jsonRepresentation;
- (unsigned long long)numDigestExpansions;
- (unsigned long long)numEngagementsAfterExpiration;
- (unsigned long long)numEngagementsInScheduled;
- (unsigned long long)numEngagementsInUpcoming;
- (unsigned long long)numExpansions;
- (id)proto;
- (id)sectionIdentifier;
- (unsigned long long)sectionPosition;
- (unsigned long long)sectionSize;
- (void)setNumDigestExpansions:(unsigned long long)arg1;
- (void)setNumEngagementsAfterExpiration:(unsigned long long)arg1;
- (void)setNumEngagementsInScheduled:(unsigned long long)arg1;
- (void)setNumEngagementsInUpcoming:(unsigned long long)arg1;
- (void)setNumExpansions:(unsigned long long)arg1;
- (void)setSectionIdentifier:(id)arg1;
- (void)setSectionPosition:(unsigned long long)arg1;
- (void)setSectionSize:(unsigned long long)arg1;

@end
