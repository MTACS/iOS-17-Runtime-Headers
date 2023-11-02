
@interface _LTInstallRequest : NSObject <NSSecureCoding> {
    id /* block */  _completionHandler;
    <_LTSpeechTranslationDelegate> * _delegate;
    id /* block */  _done;
    NSArray * _locales;
    id /* block */  _progressHandler;
    NSObject<OS_dispatch_queue> * _queue;
    <_LTTranslationService> * _service;
    bool  _useCellular;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic) <_LTSpeechTranslationDelegate> *delegate;
@property (nonatomic, copy) NSArray *locales;
@property (nonatomic, copy) id /* block */ progressHandler;
@property (nonatomic) bool useCellular;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_startInstallationWithService:(id)arg1 done:(id /* block */)arg2;
- (id /* block */)completionHandler;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocales:(id)arg1 useCellular:(bool)arg2;
- (id)initWithLocales:(id)arg1 useCellular:(bool)arg2 delegate:(id)arg3;
- (id)initWithLocales:(id)arg1 useCellular:(bool)arg2 progressHandler:(id /* block */)arg3;
- (void)languageInstallProgressed:(id)arg1 error:(id)arg2;
- (id)locales;
- (id /* block */)progressHandler;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLocales:(id)arg1;
- (void)setProgressHandler:(id /* block */)arg1;
- (void)setUseCellular:(bool)arg1;
- (bool)useCellular;

@end
