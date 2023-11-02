
@interface MCNearbyKey : NSObject {
    unsigned short  _character;
    float  _logLikelihood;
}

@property (nonatomic, readonly) unsigned short character;
@property (nonatomic, readonly) float logLikelihood;

- (unsigned short)character;
- (id)initWithCharacter:(unsigned short)arg1 logLikelihood:(float)arg2;
- (float)logLikelihood;

@end
