
@protocol SFAirDropClassroomTransferDelegate <NSObject>

@required

- (void)transferWithIdentifierWasAccepted:(NSString *)arg1;

@optional

- (void)transferWithIdentifierWasDeclined:(NSString *)arg1;
- (void)transferWithIdentifierWasDeclined:(NSString *)arg1 withFailureReason:(unsigned long long)arg2;

@end
