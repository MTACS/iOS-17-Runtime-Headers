
@interface MPStoreLyricsSnippetURLComponents : NSObject {
    NSString * _countryCode;
    double  _endTime;
    NSString * _language;
    NSString * _signature;
    long long  _songAdamID;
    double  _startTime;
}

@property (nonatomic, readonly) NSString *countryCode;
@property (nonatomic, readonly) double endTime;
@property (nonatomic, readonly) NSString *language;
@property (nonatomic, readonly) NSString *signature;
@property (nonatomic, readonly) long long songAdamID;
@property (nonatomic, readonly) double startTime;

- (void).cxx_destruct;
- (void)URLWithAdditionalParameters:(id)arg1 completion:(id /* block */)arg2;
- (id)countryCode;
- (double)endTime;
- (id)initWithSong:(id)arg1 language:(id)arg2 startTime:(double)arg3 endTime:(double)arg4;
- (id)initWithURL:(id)arg1;
- (id)language;
- (id)signature;
- (id)signatureWithCountryCode:(id)arg1 adamID:(id)arg2 startTime:(id)arg3 endTime:(id)arg4 language:(id)arg5;
- (long long)songAdamID;
- (double)startTime;

@end
