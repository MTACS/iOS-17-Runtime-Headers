
@interface MKFileDecoder : NSObject <MKAssetDecoder>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)extractFormatOfAsset:(id)arg1;

@end
