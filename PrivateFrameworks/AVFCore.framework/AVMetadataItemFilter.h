
@interface AVMetadataItemFilter : NSObject {
    AVMetadataItemFilterInternal * _itemFilterInternal;
}

@property (readonly) NSDictionary *whitelist;

+ (id)metadataItemFilterForSharing;

- (id)whitelist;

@end
