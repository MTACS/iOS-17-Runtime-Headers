
@interface PREPredictionExemptTermsDetector : NSObject {
    NSDictionary * _languageToExemptTerms;
}

- (void).cxx_destruct;
- (bool)_warmTermsIfNecessary;
- (bool)checkForExemptContentInText:(id)arg1 languageCode:(id)arg2;
- (id)init;

@end
