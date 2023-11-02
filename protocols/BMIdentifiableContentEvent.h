
@protocol BMIdentifiableContentEvent

@required

- (double)absoluteTimestamp;
- (NSString *)uniqueId;

@optional

- (NSString *)bundleId;
- (NSString *)domainId;

@end
