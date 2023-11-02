
@interface VNCoreSceneUnderstandingDetectorFeatureConfiguration : NSObject <NSCopying> {
    <VNObservationsRecipient> * _observationsRecipient;
}

@property (nonatomic, readonly) <VNObservationsRecipient> *observationsRecipient;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithObservationsRecipient:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)observationsRecipient;

@end
