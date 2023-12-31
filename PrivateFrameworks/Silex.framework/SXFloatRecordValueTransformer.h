
@interface SXFloatRecordValueTransformer : NSObject <SXDataRecordValueTransformer>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)transformValueForRecord:(id)arg1 descriptor:(id)arg2;

@end
