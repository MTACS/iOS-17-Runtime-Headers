
@interface SFUIPeopleSuggestionImageRequest : SFUIImageRequest {
    <SFPeopleSuggestion> * _peopleSuggestion;
    long long  _type;
}

@property (nonatomic, readonly, copy) <SFPeopleSuggestion> *peopleSuggestion;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (id)initWithRequestID:(int)arg1 peopleSuggestion:(id)arg2 type:(long long)arg3 resultHandler:(id /* block */)arg4;
- (id)peopleSuggestion;
- (long long)type;

@end
