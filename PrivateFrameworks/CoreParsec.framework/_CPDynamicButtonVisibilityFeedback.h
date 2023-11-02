
@interface _CPDynamicButtonVisibilityFeedback : PBCodable <NSSecureCoding, _CPDynamicButtonVisibilityFeedback, _CPProcessableFeedback> {
    NSString * _cardSectionIdentifier;
    unsigned long long  _timestamp;
    NSArray * _visibleDynamicButton2s;
}

@property (nonatomic, copy) NSString *cardSectionIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, copy) NSArray *visibleDynamicButton2s;

- (void).cxx_destruct;
- (void)addVisibleDynamicButton2s:(id)arg1;
- (id)cardSectionIdentifier;
- (void)clearVisibleDynamicButton2s;
- (unsigned long long)hash;
- (id)init;
- (id)initWithFacade:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCardSectionIdentifier:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setVisibleDynamicButton2s:(id)arg1;
- (unsigned long long)timestamp;
- (id)visibleDynamicButton2s;
- (id)visibleDynamicButton2sAtIndex:(unsigned long long)arg1;
- (unsigned long long)visibleDynamicButton2sCount;
- (void)writeTo:(id)arg1;

@end
