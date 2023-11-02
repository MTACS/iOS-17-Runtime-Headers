
@interface _MFDAMessageStoreSetFlagsRequest : DAMailboxSetFlagsRequest <MFDAMailAccountRequest>

@property (nonatomic, readonly) bool isUserRequested;
@property (nonatomic, readonly) bool shouldSend;

- (unsigned long long)generationNumber;
- (bool)isUserRequested;
- (bool)shouldSend;

@end
