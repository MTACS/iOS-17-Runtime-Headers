
@protocol REMConflictResolving

@required

- (NSSet *)changedKeys;
- (NSString *)resolutionTokenKeyForChangedKey:(NSString *)arg1;
- (REMResolutionTokenMap *)resolutionTokenMap;
- (NSData *)resolutionTokenMapData;
- (void)setResolutionTokenMap:(REMResolutionTokenMap *)arg1;
- (void)setResolutionTokenMapData:(NSData *)arg1;

@end
