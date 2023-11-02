
@interface CKContextResponse : NSObject <NSSecureCoding> {
    struct CGSize { 
        double width; 
        double height; 
    }  _availableLayoutSize;
    NSString * _debug;
    CKContextRequest * _debugRequest;
    bool  _discarded;
    NSArray * _donorBundleIdentifiers;
    _Atomic bool  _engaged;
    _Atomic bool  _engagementLogged;
    NSError * _error;
    NSDate * _hideCompletionsAfterDate;
    double  _hideCompletionsTimeLimit;
    NSString * _languageTag;
    NSArray * _level1Topics;
    NSArray * _level2Topics;
    NSArray * _loggingCouldHaveShown;
    _Atomic unsigned int  _loggingCouldHaveShownMax;
    _Atomic unsigned int  _loggingInputLengthMax;
    _Atomic bool  _loggingServerOverride;
    _Atomic unsigned int  _loggingShownMax;
    unsigned long long  _mustPrefixMatchLength;
    NSDictionary * _partsOfSpeechToTexts;
    CKContextFingerprintMinHash * _requestFingerprint;
    unsigned long long  _requestType;
    NSDate * _responseDate;
    NSArray * _results;
    bool  _resultsNeedFiltering;
    _Atomic bool  _shown;
    _Atomic bool  _shownLogged;
    _Atomic bool  _transactionLogged;
    _Atomic bool  _transactionSuccessful;
    NSString * _uuid;
}

@property (nonatomic) struct CGSize { double x1; double x2; } availableLayoutSize;
@property (nonatomic, retain) NSString *debug;
@property (nonatomic, retain) CKContextRequest *debugRequest;
@property (nonatomic, retain) NSArray *donorBundleIdentifiers;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) NSDate *hideCompletionsAfterDate;
@property (nonatomic, retain) NSString *languageTag;
@property (nonatomic, retain) NSArray *level1Topics;
@property (nonatomic, retain) NSArray *level2Topics;
@property (nonatomic) unsigned long long mustPrefixMatchLength;
@property (nonatomic, copy) NSDictionary *partsOfSpeechToTexts;
@property (nonatomic, retain) CKContextFingerprintMinHash *requestFingerprint;
@property (nonatomic) unsigned long long requestType;
@property (nonatomic, retain) NSDate *responseDate;
@property (nonatomic, retain) NSArray *results;
@property (nonatomic) bool resultsNeedFiltering;
@property (nonatomic, copy) NSString *uuid;

// Image: /System/Library/PrivateFrameworks/ContextKit.framework/ContextKit

+ (id)invalidProcessError;
+ (id)malformedRequestError;
+ (id)missingEntitlementError;
+ (id)serviceBusyError;
+ (id)serviceDisabledError;
+ (bool)supportsSecureCoding;
+ (id)timeoutError;

- (void).cxx_destruct;
- (void)addDebug:(id)arg1;
- (void)appendToDebug:(id)arg1;
- (struct CGSize { double x1; double x2; })availableLayoutSize;
- (id)completer;
- (void)dealloc;
- (id)debug;
- (id)debugRequest;
- (void)discard;
- (void)discardAndLogCompleter:(id)arg1 likelyUnsolicited:(bool)arg2;
- (id)donorBundleIdentifiers;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (unsigned long long)hash;
- (id)hideCompletionsAfterDate;
- (id)initPlaceholderWithUUID:(id)arg1 requestType:(unsigned long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithError:(id)arg1 requestType:(unsigned long long)arg2;
- (id)initWithResults:(id)arg1 requestType:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isPlaceholder;
- (id)languageTag;
- (id)level1Topics;
- (id)level2Topics;
- (void)logEngagement:(id)arg1 forInputLength:(unsigned long long)arg2 completion:(id)arg3 likelyUnsolicited:(bool)arg4;
- (void)logTransactionSuccessfulForInputLength:(unsigned long long)arg1 completion:(id)arg2 likelyUnsolicited:(bool)arg3;
- (void)markResultsShown:(unsigned long long)arg1 serverOverride:(bool)arg2 forInputLength:(unsigned long long)arg3 results:(id)arg4;
- (unsigned long long)mustPrefixMatchLength;
- (id)partsOfSpeechToTexts;
- (id)requestFingerprint;
- (unsigned long long)requestType;
- (id)responseDate;
- (id)responseSummary:(bool)arg1 showHigherLevelTopics:(bool)arg2 maxPrefix:(long long)arg3;
- (id)resultByQuery:(id)arg1;
- (id)results;
- (bool)resultsNeedFiltering;
- (void)setAvailableLayoutSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setDebug:(id)arg1;
- (void)setDebugRequest:(id)arg1;
- (void)setDonorBundleIdentifiers:(id)arg1;
- (void)setError:(id)arg1;
- (void)setHideCompletionsAfterDate:(id)arg1;
- (void)setHideCompletionsTimeLimit:(double)arg1;
- (void)setLanguageTag:(id)arg1;
- (void)setLevel1Topics:(id)arg1;
- (void)setLevel2Topics:(id)arg1;
- (void)setMustPrefixMatchLength:(unsigned long long)arg1;
- (void)setPartsOfSpeechToTexts:(id)arg1;
- (void)setRequestFingerprint:(id)arg1;
- (void)setRequestType:(unsigned long long)arg1;
- (void)setResponseDate:(id)arg1;
- (void)setResults:(id)arg1;
- (void)setResultsNeedFiltering:(bool)arg1;
- (void)setUuid:(id)arg1;
- (id)toJSONSerializableDictionary;
- (id)uuid;

// Image: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI

- (id)safari_topQIDsWithMaximumCount:(unsigned long long)arg1;

@end
