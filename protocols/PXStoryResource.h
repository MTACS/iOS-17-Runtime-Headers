
@protocol PXStoryResource <NSObject, NSCopying>

@required

- (NSString *)px_storyResourceIdentifier;
- (long long)px_storyResourceKind;

@end
