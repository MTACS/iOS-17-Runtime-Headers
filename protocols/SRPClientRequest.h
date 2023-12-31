
@protocol SRPClientRequest <NSObject>

@required

- (NSString *)dsid;
- (NSDictionary *)escrowRecord;
- (NSString *)recordID;
- (NSString *)recordLabel;
- (NSString *)recoveryPassphrase;
- (NSError *)validateInput;

@end
