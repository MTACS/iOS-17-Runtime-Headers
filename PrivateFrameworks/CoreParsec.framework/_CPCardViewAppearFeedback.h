
@interface _CPCardViewAppearFeedback : PBCodable <NSSecureCoding, _CPCardViewAppearFeedback, _CPProcessableFeedback> {
    _CPCardForFeedback * _card;
    NSString * _fbr;
    unsigned int  _level;
    unsigned long long  _timestamp;
}

@property (nonatomic, retain) _CPCardForFeedback *card;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *fbr;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int level;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (id)card;
- (id)fbr;
- (unsigned long long)hash;
- (id)init;
- (id)initWithFacade:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned int)level;
- (bool)readFrom:(id)arg1;
- (void)setCard:(id)arg1;
- (void)setFbr:(id)arg1;
- (void)setLevel:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
