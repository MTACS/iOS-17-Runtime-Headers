
@protocol TSUResourceInfo <NSObject>

@required

- (unsigned long long)estimatedResourceSize;
- (NSString *)resourceIdentifier;
- (NSSet *)resourceTags;

@end
