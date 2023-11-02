
@interface PPQueryScorableAttributes : NSObject {
    NSData * _portraitFeatureVector;
    NSNumber * _portraitFeatureVectorVersion;
    NSDictionary * _portraitNamedEntities;
    NSNumber * _portraitStaticScore;
}

@property (nonatomic, retain) NSData *portraitFeatureVector;
@property (nonatomic, retain) NSNumber *portraitFeatureVectorVersion;
@property (nonatomic, retain) NSDictionary *portraitNamedEntities;
@property (nonatomic, retain) NSNumber *portraitStaticScore;

- (void).cxx_destruct;
- (id)portraitFeatureVector;
- (id)portraitFeatureVectorVersion;
- (id)portraitNamedEntities;
- (id)portraitStaticScore;
- (void)setPortraitFeatureVector:(id)arg1;
- (void)setPortraitFeatureVectorVersion:(id)arg1;
- (void)setPortraitNamedEntities:(id)arg1;
- (void)setPortraitStaticScore:(id)arg1;

@end
