
@protocol MSVSegmentedCoding <NSSecureCoding, NSObject>

@required

- (void)didRestoreVersion:(long long)arg1 forSegment:(NSString *)arg2;
- (NSString *)segmentForCodingKey:(NSString *)arg1;
- (long long)versionForSegment:(NSString *)arg1;

@end
