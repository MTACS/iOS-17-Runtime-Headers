
@interface IDSCloudMessagingLinkReEstablishedMetric : NSObject <CUTAWDMetric, CUTCoreAnalyticsMetric> {
    double  _inactiveTime;
    unsigned long long  _linkType;
    unsigned long long  _priorLinkType;
}

@property (readonly) unsigned int awdIdentifier;
@property (nonatomic, readonly) PBCodable<NSCopying> *awdRepresentation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double inactiveTime;
@property (nonatomic, readonly) unsigned long long linkType;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned long long priorLinkType;
@property (readonly) Class superclass;

- (unsigned int)awdIdentifier;
- (id)awdRepresentation;
- (id)dictionaryRepresentation;
- (double)inactiveTime;
- (id)initWithInactiveTime:(double)arg1 linkType:(unsigned long long)arg2 priorLinkType:(unsigned long long)arg3;
- (unsigned long long)linkType;
- (id)name;
- (unsigned long long)priorLinkType;

@end