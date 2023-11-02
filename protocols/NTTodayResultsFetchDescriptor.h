
@protocol NTTodayResultsFetchDescriptor <NSCopying>

@required

- (Class)descriptorsOperationClass;
- (Class)fetchOperationClass;
- (NSArray *)placeholderSectionDescriptorsWithContentRequest:(NTPBTodayModuleContentRequest *)arg1;
- (NSString *)sourceIdentifier;

@end
