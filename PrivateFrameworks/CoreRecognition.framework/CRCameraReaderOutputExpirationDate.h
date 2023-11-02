
@interface CRCameraReaderOutputExpirationDate : CRCameraReaderOutput

@property (readonly) NSNumber *dayValue;
@property (readonly) NSNumber *monthValue;
@property (readonly) NSNumber *yearValue;

- (id)dayValue;
- (id)monthValue;
- (id)yearValue;

@end
