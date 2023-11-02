
@protocol CATSharingConnectionDelegate <NSObject>

@required

- (void)connection:(id <CATSharingConnection>)arg1 receivedData:(NSData *)arg2;
- (void)connectionClosed:(id <CATSharingConnection>)arg1;

@end
