
@protocol NTSectionQueueDescriptor <NSCopying>

@required

- (NSArray *)sectionDescriptors;
- (unsigned long long)visibleSectionConfigsLimit;

@end
