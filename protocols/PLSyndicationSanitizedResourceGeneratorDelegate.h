
@protocol PLSyndicationSanitizedResourceGeneratorDelegate <NSObject>

@required

- (PAImageConversionServiceClient *)imageConversionClientForResourceGenerator:(PLSyndicationSanitizedResourceGenerator *)arg1;
- (PFMetadata *)metadataForResourceGenerator:(PLSyndicationSanitizedResourceGenerator *)arg1 fromFileURL:(NSURL *)arg2;
- (PAVideoConversionServiceClient *)videoConversionClientForResourceGenerator:(PLSyndicationSanitizedResourceGenerator *)arg1;

@end
