
@protocol PXTapToRadarDiagnosticContainer

@required

- (void)addAttachment:(NSURL *)arg1;
- (void)addAttachmentWithData:(NSData *)arg1 name:(NSString *)arg2;
- (void)addAttachmentWithDictionary:(NSDictionary *)arg1 name:(NSString *)arg2;
- (void)addAttachmentWithObjectiveCCode:(NSString *)arg1 name:(NSString *)arg2;
- (void)addAttachmentWithSwiftCode:(NSString *)arg1 name:(NSString *)arg2;
- (void)addAttachmentWithText:(NSString *)arg1 name:(NSString *)arg2;
- (void)addAttachmentWithText:(NSString *)arg1 name:(NSString *)arg2 extension:(NSString *)arg3;
- (void)addSubprovider:(id <PXTapToRadarDiagnosticProvider>)arg1;
- (void)addSubproviders:(NSArray *)arg1;
- (<PXTapToRadarDiagnosticCollectionOperation> *)beginCollectionOperationWithName:(NSString *)arg1 timeout:(double)arg2;
- (id)objectForKeyedSubscript:(NSString *)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(NSString *)arg2;

@end
