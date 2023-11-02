
@interface _CPLookupHintRelevancyFeedback : PBCodable <NSSecureCoding, _CPLookupHintRelevancyFeedback, _CPProcessableFeedback> {
    NSString * _context;
    bool  _discarded;
    NSString * _domain;
    int  _grade;
    _CPRange * _hintRange;
    unsigned long long  _timestamp;
}

@property (nonatomic, copy) NSString *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool discarded;
@property (nonatomic, copy) NSString *domain;
@property (nonatomic) int grade;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _CPRange *hintRange;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (id)context;
- (bool)discarded;
- (id)domain;
- (int)grade;
- (unsigned long long)hash;
- (id)hintRange;
- (id)init;
- (id)initWithFacade:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDiscarded:(bool)arg1;
- (void)setDomain:(id)arg1;
- (void)setGrade:(int)arg1;
- (void)setHintRange:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
