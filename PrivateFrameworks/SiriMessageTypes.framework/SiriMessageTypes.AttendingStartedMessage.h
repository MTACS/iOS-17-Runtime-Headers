
@interface SiriMessageTypes.AttendingStartedMessage : SiriMessageTypes.SessionMessageBase {
    void rootRequestId;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (id)description;

@end
