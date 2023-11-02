
@interface WFPlayMediaIntentPodcastObject : WFiTunesPodcastObject <MTLJSONSerializing> {
    INPlayMediaIntent * _intent;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) INPlayMediaIntent *intent;
@property (readonly) Class superclass;

+ (id)intentJSONTransformer;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithIntent:(id)arg1;
- (id)intent;
- (bool)isEqual:(id)arg1;

@end
