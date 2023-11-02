
@protocol PGSummarizedFeature <NSObject>

@required

- (NSSet *)intervalsPresent;
- (bool)isMandatoryForKeyAsset;
- (unsigned short)type;

@end
