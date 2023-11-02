
@protocol CMPhotoInPlaceHEIFEditorDelegate <NSObject>

@optional

- (int)extrinsics:(NSDictionary *)arg1 forIndex:(long long)arg2 modifiedExtrinsics:(id*)arg3;
- (int)metadataPayload:(NSData *)arg1 forImageIndex:(long long)arg2 payloadIndex:(long long)arg3 withType:(unsigned long long)arg4 customMetadataIdentifier:(NSDictionary *)arg5 modifiedData:(id*)arg6;
- (bool)shouldModifyMetadataForImageIndex:(long long)arg1 payloadIndex:(long long)arg2 withType:(unsigned long long)arg3 customMetadataIdentifier:(NSDictionary *)arg4;

@end
