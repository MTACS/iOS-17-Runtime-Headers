
@protocol PXNewSearchResult <NSObject>

@required

- (unsigned long long)assetCount;
- (NSString *)identifier;
- (NSString *)subtitle;
- (NSString *)title;
- (unsigned long long)type;

@end
