
@interface _INPBIntentSlotResolutionMulticardinalResult : PBCodable <NSCopying, NSSecureCoding, _INPBIntentSlotResolutionMulticardinalResult> {
    struct { }  _has;
    NSArray * _resolutionResults;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *resolutionResults;
@property (nonatomic, readonly) unsigned long long resolutionResultsCount;
@property (readonly) Class superclass;

+ (Class)resolutionResultsType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addResolutionResults:(id)arg1;
- (void)clearResolutionResults;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)resolutionResults;
- (id)resolutionResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)resolutionResultsCount;
- (void)setResolutionResults:(id)arg1;
- (void)writeTo:(id)arg1;

@end
