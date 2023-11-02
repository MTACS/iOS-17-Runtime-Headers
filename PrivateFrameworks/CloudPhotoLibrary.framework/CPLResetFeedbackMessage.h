
@interface CPLResetFeedbackMessage : CPLFeedbackMessage {
    NSString * _reason;
    NSString * _resetType;
    NSString * _uuid;
}

@property (nonatomic, readonly) NSString *reason;
@property (nonatomic, readonly) NSString *resetType;
@property (nonatomic, readonly) NSString *uuid;

+ (id)feedbackType;

- (void).cxx_destruct;
- (id)initWithResetType:(id)arg1 reason:(id)arg2 uuid:(id)arg3 libraryIdentifier:(id)arg4;
- (id)reason;
- (id)resetType;
- (id)serverMessage;
- (id)uuid;

@end
