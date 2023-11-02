
@interface CPLInfoFeedbackMessage : CPLFeedbackMessage {
    NSDictionary * _info;
}

@property (nonatomic, readonly) NSDictionary *info;

+ (id)feedbackType;

- (void).cxx_destruct;
- (id)info;
- (id)initWithInfo:(id)arg1 libraryIdentifier:(id)arg2;
- (id)serverMessage;

@end
