
@interface _PSCNAutocompleteFeedback : NSObject <BMStoreData, NSSecureCoding> {
    NSString * _bundleIdentifier;
    unsigned int  _dataVersion;
    _PSCNAutocompleteFeedbackEntered * _entered;
    _PSCNAutocompleteFeedbackErasedHandle * _erasedHandle;
    _PSCNAutocompleteFeedbackExited * _exited;
    long long  _feedbackType;
    bool  _isImplicit;
    NSDate * _reportTime;
    NSString * _sourceBundleIdentifier;
    _PSCNAutocompleteFeedbackTappedSuggestion * _tappedSuggestion;
    _PSCNAutocompleteFeedbackTypedHandle * _typedHandle;
    NSString * _userIdentifier;
    _PSCNAutocompleteFeedbackVendedSuggestions * _vendedSuggestions;
}

@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) _PSCNAutocompleteFeedbackEntered *entered;
@property (nonatomic, copy) _PSCNAutocompleteFeedbackErasedHandle *erasedHandle;
@property (nonatomic, copy) _PSCNAutocompleteFeedbackExited *exited;
@property (nonatomic) long long feedbackType;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isImplicit;
@property (nonatomic, retain) NSDate *reportTime;
@property (nonatomic, retain) NSString *sourceBundleIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, copy) _PSCNAutocompleteFeedbackTappedSuggestion *tappedSuggestion;
@property (nonatomic, copy) _PSCNAutocompleteFeedbackTypedHandle *typedHandle;
@property (nonatomic, retain) NSString *userIdentifier;
@property (nonatomic, copy) _PSCNAutocompleteFeedbackVendedSuggestions *vendedSuggestions;

+ (id)createEnteredFeedbackWithBundleIdentifier:(id)arg1 status:(long long)arg2;
+ (id)createErasedHandleFeedbackWithBundleIdentifier:(id)arg1 contact:(id)arg2;
+ (id)createExitedFeedbackWithBundleIdentifier:(id)arg1 status:(long long)arg2;
+ (id)createTappedSuggestionFeedbackWithBundleIdentifier:(id)arg1 suggestion:(id)arg2;
+ (id)createTypedHandleFeedbackWithBundleIdentifier:(id)arg1 contact:(id)arg2 viaContactPicker:(bool)arg3;
+ (id)createVendedSuggestionsFeedbackWithBundleIdentifier:(id)arg1 suggestions:(id)arg2;
+ (id)createVendedSuggestionsFeedbackWithBundleIdentifier:(id)arg1 suggestions:(id)arg2 isImplicit:(bool)arg3;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (unsigned int)dataVersion;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)entered;
- (id)erasedHandle;
- (id)exited;
- (long long)feedbackType;
- (id)initWithBundleIdentifier:(id)arg1 feedbackType:(long long)arg2 isImplicit:(bool)arg3 entered:(id)arg4 exited:(id)arg5 vendedSuggestions:(id)arg6 tappedSuggestion:(id)arg7 typedHandle:(id)arg8 erasedHandle:(id)arg9;
- (id)initWithCoder:(id)arg1;
- (id)initWithDataVersion:(unsigned int)arg1 reportTime:(id)arg2 userIdentifier:(id)arg3 bundleIdentifier:(id)arg4 sourceBundleIdentifier:(id)arg5 isImplicit:(bool)arg6 feedbackType:(long long)arg7 entered:(id)arg8 exited:(id)arg9 vendedSuggestions:(id)arg10 tappedSuggestion:(id)arg11 typedHandle:(id)arg12 erasedHandle:(id)arg13;
- (bool)isImplicit;
- (id)reportTime;
- (id)serialize;
- (void)setBundleIdentifier:(id)arg1;
- (void)setDataVersion:(unsigned int)arg1;
- (void)setEntered:(id)arg1;
- (void)setErasedHandle:(id)arg1;
- (void)setExited:(id)arg1;
- (void)setFeedbackType:(long long)arg1;
- (void)setIsImplicit:(bool)arg1;
- (void)setReportTime:(id)arg1;
- (void)setSourceBundleIdentifier:(id)arg1;
- (void)setTappedSuggestion:(id)arg1;
- (void)setTypedHandle:(id)arg1;
- (void)setUserIdentifier:(id)arg1;
- (void)setVendedSuggestions:(id)arg1;
- (id)sourceBundleIdentifier;
- (id)tappedSuggestion;
- (id)typedHandle;
- (id)userIdentifier;
- (id)vendedSuggestions;

@end
