
@interface SiriMessageTypes.RequestMessageBase : SiriMessageTypes.SessionMessageBase {
    void requestId;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (id)description;

@end
