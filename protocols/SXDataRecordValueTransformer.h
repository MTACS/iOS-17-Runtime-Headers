
@protocol SXDataRecordValueTransformer <NSObject>

@required

- (id)transformValueForRecord:(SXDataRecord *)arg1 descriptor:(SXDataDescriptor *)arg2;

@end
