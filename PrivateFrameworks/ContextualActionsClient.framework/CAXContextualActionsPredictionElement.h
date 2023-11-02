
@interface CAXContextualActionsPredictionElement : NSObject {
    NSString * _encodedActionIdentifier;
    NSNumber * _frequency;
    NSNumber * _normalizedFrequency;
    NSNumber * _priorTotal;
}

@property (nonatomic, retain) NSString *encodedActionIdentifier;
@property (nonatomic, retain) NSNumber *frequency;
@property (nonatomic, retain) NSNumber *normalizedFrequency;
@property (nonatomic, retain) NSNumber *priorTotal;

- (void).cxx_destruct;
- (id)encodedActionIdentifier;
- (id)frequency;
- (unsigned long long)hash;
- (id)initWithIdentifier:(id)arg1 frequency:(id)arg2;
- (id)initWithIdentifier:(id)arg1 frequency:(id)arg2 normalizedFrequency:(id)arg3 priorTotal:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)normalizedFrequency;
- (id)priorTotal;
- (void)setEncodedActionIdentifier:(id)arg1;
- (void)setFrequency:(id)arg1;
- (void)setNormalizedFrequency:(id)arg1;
- (void)setPriorTotal:(id)arg1;

@end
