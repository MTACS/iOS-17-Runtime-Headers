
@protocol _DPDataRecorder

@required

- (void)recordBitValues:(NSArray *)arg1;
- (void)recordBitValues:(NSArray *)arg1 metadata:(NSDictionary *)arg2;
- (void)recordBitVectors:(NSArray *)arg1;
- (void)recordBitVectors:(NSArray *)arg1 metadata:(NSDictionary *)arg2;
- (void)recordFloatVectors:(NSArray *)arg1;
- (void)recordFloatVectors:(NSArray *)arg1 metadata:(NSDictionary *)arg2;
- (void)recordNumbers:(NSArray *)arg1;
- (void)recordNumbers:(NSArray *)arg1 metadata:(NSDictionary *)arg2;
- (void)recordNumbersVectors:(NSArray *)arg1;
- (void)recordNumbersVectors:(NSArray *)arg1 metadata:(NSDictionary *)arg2;
- (void)recordStrings:(NSArray *)arg1;
- (void)recordStrings:(NSArray *)arg1 metadata:(NSDictionary *)arg2;
- (void)recordWords:(NSArray *)arg1;

@end
