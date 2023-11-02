
@interface PNLocationCurationWrapper : NSObject <PNLocationCuratable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (unsigned long long)fetchLimit;
+ (id)representativeAssetsForMapDisplayFromAssets:(id)arg1;
+ (id)requiredFetchPropertySets;

@end
