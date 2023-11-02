
@protocol PGGraphRelatableEvent <PGGraphFullMeaninglessEvent>

@required

+ (NSString *)inclusivePathFromTargetNodeDomain:(unsigned short)arg1 withName:(NSString *)arg2;
+ (NSString *)inclusivePathToTargetNodeDomain:(unsigned short)arg1 withName:(NSString *)arg2;
+ (NSString *)pathFromMoment;
+ (NSString *)pathFromTargetNodeDomain:(unsigned short)arg1;
+ (NSString *)pathToMoment;
+ (NSString *)pathToTargetNodeDomain:(unsigned short)arg1;

- (NSSet *)connectedEventsWithTargetDomain:(unsigned short)arg1;
- (NSDictionary *)keywordsForRelatedType:(unsigned long long)arg1 focusOnNodes:(NSSet *)arg2;
- (<PGGraphPhotoEvent> *)photoEvent;
- (double)weightForMoment:(PGGraphMomentNode *)arg1;

@end
