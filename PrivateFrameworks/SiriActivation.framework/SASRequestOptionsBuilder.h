
@interface SASRequestOptionsBuilder : NSObject {
    long long  _presentationIdentifier;
    SASSystemState * _systemState;
}

@property (nonatomic) long long presentationIdentifier;
@property (nonatomic, retain) SASSystemState *systemState;

- (void).cxx_destruct;
- (id)_createRequestOptionsForRequest:(id)arg1 withDataSource:(id)arg2;
- (bool)_siriIsEnabled;
- (id)buildOptionsWithRequest:(id)arg1 presentationIdentifier:(long long)arg2 dataSource:(id)arg3;
- (long long)presentationIdentifier;
- (void)setPresentationIdentifier:(long long)arg1;
- (void)setSystemState:(id)arg1;
- (id)systemState;

@end
