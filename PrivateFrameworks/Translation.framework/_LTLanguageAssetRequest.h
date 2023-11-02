
@interface _LTLanguageAssetRequest : NSObject <NSSecureCoding, _LTLanguageAssetRequestProtocol> {
    NSArray * _assets;
    id /* block */  _completion;
    <_LTSpeechTranslationDelegate> * _delegate;
    id /* block */  _done;
    unsigned long long  _options;
    id /* block */  _progress;
    NSObject<OS_dispatch_queue> * _queue;
    <_LTTranslationService> * _service;
}

@property (nonatomic, readonly, copy) NSArray *assets;
@property (nonatomic, readonly, copy) id /* block */ completion;
@property (nonatomic) <_LTSpeechTranslationDelegate> *delegate;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly, copy) id /* block */ progress;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)assetRequestWithService:(id)arg1 done:(id /* block */)arg2;
- (void)assetResponseWithProgress:(id)arg1 finished:(bool)arg2 error:(id)arg3;
- (id)assets;
- (id /* block */)completion;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLanguageAssets:(id)arg1 options:(unsigned long long)arg2 progress:(id /* block */)arg3 completion:(id /* block */)arg4;
- (unsigned long long)options;
- (id /* block */)progress;
- (void)setDelegate:(id)arg1;

@end
