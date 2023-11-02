
@interface DDScannerServiceConfiguration : NSObject <NSCopying, NSSecureCoding> {
    NSObject<OS_dispatch_queue> * _completionQueue;
    long long * _jobIdentifierPtr;
    NSString * _language;
    bool  _languageHighConfidence;
    bool  _noObjC;
    NSString * _recyclingIdentifier;
    bool  _remoteScannerEnabled;
    long long  _resultsOptions;
    long long  _scannerOptions;
    int  _scannerType;
    bool  _spotlightSuggestionsEnabled;
    double  _timeout;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *completionQueue;
@property (nonatomic, retain) NSString *language;
@property (nonatomic) bool languageHighConfidence;
@property (nonatomic) bool noObjC;
@property (nonatomic) bool remoteScannerEnabled;
@property (nonatomic) long long resultsOptions;
@property (nonatomic) long long scannerOptions;
@property (nonatomic) bool spotlightSuggestionsEnabled;
@property (nonatomic) double timeout;

// Image: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)completionQueue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initEmpty;
- (id)initWithCoder:(id)arg1;
- (id)initWithScannerType:(int)arg1 passiveIntent:(bool)arg2;
- (id)language;
- (bool)languageHighConfidence;
- (bool)noObjC;
- (bool)remoteScannerEnabled;
- (long long)resultsOptions;
- (long long)scannerOptions;
- (int)scannerType;
- (void)setCompletionQueue:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setLanguageHighConfidence:(bool)arg1;
- (void)setNoObjC:(bool)arg1;
- (void)setRemoteScannerEnabled:(bool)arg1;
- (void)setResultsOptions:(long long)arg1;
- (void)setScannerOptions:(long long)arg1;
- (void)setSpotlightSuggestionsEnabled:(bool)arg1;
- (void)setTimeout:(double)arg1;
- (bool)spotlightSuggestionsEnabled;
- (double)timeout;

// Image: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition

+ (id)_crConfigForLocale:(id)arg1;

@end
