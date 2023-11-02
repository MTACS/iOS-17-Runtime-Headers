
@protocol AAVersionUpdaterProtocol

@required

- (bool)needsUpdate;

@optional

+ (NSArray *)orderedVersions;

@end
