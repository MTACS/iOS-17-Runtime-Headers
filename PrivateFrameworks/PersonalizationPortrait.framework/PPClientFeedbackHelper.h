
@interface PPClientFeedbackHelper : NSObject {
    NSString * _clientIdentifier;
    NSString * _parentObjectClass;
}

@property (nonatomic, retain) NSString *clientIdentifier;

- (void).cxx_destruct;
- (id)clientIdentifier;
- (id)initWithParentObject:(id)arg1;
- (void)setClientIdentifier:(id)arg1;

@end
