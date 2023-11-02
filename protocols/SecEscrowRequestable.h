
@protocol SecEscrowRequestable <NSObject>

@required

+ (<SecEscrowRequestable> *)request:(id*)arg1;

- (bool)escrowCompletedWithinLastSeconds:(double)arg1;
- (NSDictionary *)fetchStatuses:(id*)arg1;
- (bool)pendingEscrowUpload:(id*)arg1;
- (bool)triggerEscrowUpdate:(NSString *)arg1 error:(id*)arg2;
- (bool)triggerEscrowUpdate:(NSString *)arg1 options:(NSDictionary *)arg2 error:(id*)arg3;

@end
