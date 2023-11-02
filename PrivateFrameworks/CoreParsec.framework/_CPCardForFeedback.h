
@interface _CPCardForFeedback : PBCodable <NSSecureCoding, _CPCardForFeedback> {
    NSArray * _cardSections;
    NSString * _fbr;
}

@property (nonatomic, copy) NSArray *cardSections;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *fbr;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addCardSections:(id)arg1;
- (id)cardSections;
- (id)cardSectionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)cardSectionsCount;
- (void)clearCardSections;
- (id)fbr;
- (unsigned long long)hash;
- (id)initWithFacade:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCardSections:(id)arg1;
- (void)setFbr:(id)arg1;
- (void)writeTo:(id)arg1;

@end
