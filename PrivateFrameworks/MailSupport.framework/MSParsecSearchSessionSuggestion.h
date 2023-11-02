
@interface MSParsecSearchSessionSuggestion : NSObject <MSParsecSearchSessionResult> {
    NSString * _category;
    long long  _option;
    SFMailResultDetails * _resultDetails;
    NSString * _resultID;
}

@property (nonatomic, readonly) NSString *category;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long option;
@property (nonatomic, readonly) SFMailResultDetails *resultDetails;
@property (nonatomic, readonly) NSString *resultID;
@property (readonly) Class superclass;

+ (id)suggestionWithIdentifier:(id)arg1 category:(id)arg2 option:(long long)arg3 resultDetails:(id)arg4;

- (void).cxx_destruct;
- (id)_suggestionBundleID;
- (id)category;
- (id)feedbackResult;
- (id)initWithIdentifier:(id)arg1 category:(id)arg2 option:(long long)arg3 resultDetails:(id)arg4;
- (long long)option;
- (id)resultDetails;
- (id)resultID;

@end
