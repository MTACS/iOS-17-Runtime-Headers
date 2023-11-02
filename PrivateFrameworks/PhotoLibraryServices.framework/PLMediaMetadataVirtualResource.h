
@interface PLMediaMetadataVirtualResource : PLVirtualResource {
    unsigned long long  _dataLength;
}

- (long long)dataLength;
- (long long)estimatedDataLength;
- (id)initWithAsset:(id)arg1 resourceType:(unsigned int)arg2 version:(unsigned int)arg3 recipeID:(unsigned int)arg4 dataLength:(unsigned long long)arg5;

@end
