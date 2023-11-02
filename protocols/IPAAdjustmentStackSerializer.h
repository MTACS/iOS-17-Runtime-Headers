
@protocol IPAAdjustmentStackSerializer <NSObject>

@required

- (IPAAdjustmentStack *)adjustmentStackFromData:(NSData *)arg1 error:(id*)arg2;
- (NSDictionary *)archiveFromData:(NSData *)arg1 error:(id*)arg2;
- (NSData *)dataFromAdjustmentStack:(IPAAdjustmentStack *)arg1 error:(id*)arg2;
- (NSData *)dataFromArchive:(NSDictionary *)arg1 error:(id*)arg2;

@end
