
@interface EKPersistentChangeStoreRowInfo : NSObject {
    NSString * _clientIdentifier;
    int  _consumedSequenceNumber;
}

@property (nonatomic, retain) NSString *clientIdentifier;
@property (nonatomic) int consumedSequenceNumber;

- (void).cxx_destruct;
- (id)clientIdentifier;
- (int)consumedSequenceNumber;
- (id)description;
- (void)setClientIdentifier:(id)arg1;
- (void)setConsumedSequenceNumber:(int)arg1;

@end
