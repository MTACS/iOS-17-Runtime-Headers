
@interface AFUITestInput : NSObject {
    SASRequestOptions * _requestOptions;
}

@property (nonatomic, readonly) SASRequestOptions *requestOptions;

+ (id)_baseRequestOptions;

- (void).cxx_destruct;
- (id)_initWithRequestOptions:(id)arg1;
- (id)initWithRecordedSpeechURL:(id)arg1;
- (id)initWithText:(id)arg1;
- (id)requestOptions;

@end
