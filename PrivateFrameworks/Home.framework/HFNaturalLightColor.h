
@interface HFNaturalLightColor : NSObject <HFColorLikeObject, NAIdentifiable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)na_identity;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;

@end
