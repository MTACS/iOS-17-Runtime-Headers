
@interface MSParsecSearchSessionMessageResult : NSObject <MSParsecSearchSessionResult> {
    long long  _messageAge;
    NSString * _resultID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long messageAge;
@property (nonatomic, readonly) NSString *resultID;
@property (readonly) Class superclass;

+ (id)resultWithIdentifier:(id)arg1;
+ (id)resultWithIdentifier:(id)arg1 date:(id)arg2;

- (void).cxx_destruct;
- (id)feedbackResult;
- (id)initResultWithIdentifier:(id)arg1 date:(id)arg2;
- (long long)messageAge;
- (id)resultID;

@end
