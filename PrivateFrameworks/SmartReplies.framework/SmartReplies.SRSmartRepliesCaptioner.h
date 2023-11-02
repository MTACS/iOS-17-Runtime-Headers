
@interface SmartReplies.SRSmartRepliesCaptioner : NSObject {
    void $__lazy_storage_$_captionPhraseArbiter;
    void $__lazy_storage_$_predictionExemptTermsDetector;
    void $__lazy_storage_$_shortcodeResolutionManager;
    void preferredLanguageCode;
}

@property (nonatomic, copy) NSString *preferredLanguageCode;

+ (bool)looksLikePhoneShortCodeWithHandle:(id)arg1;

- (void).cxx_destruct;
- (void)captionsWithContactDetail:(id)arg1 associatedText:(id)arg2 onComplete:(id /* block */)arg3;
- (void)captionsWithImage:(struct CGImage { }*)arg1 onComplete:(id /* block */)arg2;
- (void)captionsWithImageURL:(id)arg1 onComplete:(id /* block */)arg2;
- (void)captionsWithImageURLs:(id)arg1 onComplete:(id /* block */)arg2;
- (void)captionsWithLinkMetadata:(id)arg1 onComplete:(id /* block */)arg2;
- (void)captionsWithText:(id)arg1 onComplete:(id /* block */)arg2;
- (void)captionsWithText:(id)arg1 preferBusinessTopics:(bool)arg2 onComplete:(id /* block */)arg3;
- (void)friendlyCaptionFor:(id)arg1 onComplete:(id /* block */)arg2;
- (id)init;
- (id)normalizedShortCodeMessageTextWithContactDetail:(id)arg1 originalMessageText:(id)arg2;
- (id)preferredLanguageCode;
- (void)setPreferredLanguageCode:(id)arg1;
- (void)summaryCaptionsFor:(id)arg1 withTopicsOnly:(bool)arg2 onComplete:(id /* block */)arg3;
- (void)summaryCaptionsFor:(id)arg1 withTopicsOnly:(bool)arg2 preferBusinessTopics:(bool)arg3 onComplete:(id /* block */)arg4;
- (void)unifiedImageCaptionFor:(id)arg1 onComplete:(id /* block */)arg2;

@end
