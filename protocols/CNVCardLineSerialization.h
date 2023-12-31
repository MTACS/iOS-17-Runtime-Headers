
@protocol CNVCardLineSerialization <NSObject>

@required

- (bool)canSerializeArray:(NSArray *)arg1;
- (bool)canSerializeData:(NSData *)arg1;
- (bool)canSerializeString:(NSString *)arg1;
- (unsigned long long)estimatedDataLength;
- (void)insertLine:(CNVCardLine *)arg1 atMarker:(id)arg2;
- (id)insertionMarker;
- (void)serializeArray:(NSArray *)arg1 withItemSeparator:(NSString *)arg2;
- (void)serializeData:(NSData *)arg1;
- (void)serializeLine:(CNVCardLine *)arg1;
- (void)serializeOpaqueValue:(NSData *)arg1;
- (void)serializeString:(NSString *)arg1;
- (void)serializeVersionPlaceholder;

@end
