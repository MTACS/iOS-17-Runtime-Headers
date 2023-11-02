
@interface ATXSuggestionLayout : NSObject <ATXSuggestionLayoutProtocol, NSCopying> {
    bool  _confidenceWarrantsSnappingOrNPlusOne;
    NSArray * _fourByEightSuggestions;
    NSArray * _fourByFourSuggestions;
    bool  _isLowConfidenceStackRotationForStaleStack;
    bool  _isNPlusOne;
    bool  _isValidForSuggestionsWidget;
    double  _layoutScore;
    long long  _layoutType;
    unsigned long long  _numWidgetsInStack;
    NSArray * _oneByFourSuggestions;
    NSArray * _oneByOneSuggestions;
    NSArray * _oneByTwoSuggestions;
    NSArray * _twoByFourSuggestions;
    NSArray * _twoByTwoSuggestions;
    NSUUID * _uuid;
    NSUUID * _uuidOfHighestConfidenceSuggestion;
    NSString * _widgetUniqueId;
}

@property (nonatomic) bool confidenceWarrantsSnappingOrNPlusOne;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *fourByEightSuggestions;
@property (nonatomic, retain) NSArray *fourByFourSuggestions;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isLowConfidenceStackRotationForStaleStack;
@property (nonatomic) bool isNPlusOne;
@property (nonatomic) bool isValidForSuggestionsWidget;
@property (nonatomic) double layoutScore;
@property (nonatomic, readonly) long long layoutType;
@property (nonatomic) unsigned long long numWidgetsInStack;
@property (nonatomic, retain) NSArray *oneByFourSuggestions;
@property (nonatomic, retain) NSArray *oneByOneSuggestions;
@property (nonatomic, retain) NSArray *oneByTwoSuggestions;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *twoByFourSuggestions;
@property (nonatomic, retain) NSArray *twoByTwoSuggestions;
@property (nonatomic, retain) NSUUID *uuid;
@property (nonatomic, retain) NSUUID *uuidOfHighestConfidenceSuggestion;
@property (nonatomic, retain) NSString *widgetUniqueId;

// Image: /System/Library/PrivateFrameworks/ProactiveSuggestionClientModel.framework/ProactiveSuggestionClientModel

+ (bool)isCompositeLayout:(long long)arg1;
+ (id)maxSuggestionLayoutTypesForUILayoutType:(long long)arg1;
+ (id)minSuggestionLayoutTypesForUILayoutType:(long long)arg1;
+ (id)stringFromUILayoutType:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)_layoutTypeFromProtoLayoutType:(int)arg1;
- (int)_protoLayoutTypeFromLayoutType:(long long)arg1;
- (id)allSuggestionsInLayout;
- (id)arrayOfJSONFromSuggestionArray:(id)arg1;
- (bool)checkAndReportDecodingFailureIfNeededForBOOL:(bool)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (bool)checkAndReportDecodingFailureIfNeededForNSInteger:(long long)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (bool)checkAndReportDecodingFailureIfNeededFordouble:(double)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (bool)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (id)compactDescription;
- (bool)confidenceWarrantsSnappingOrNPlusOne;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (id)fourByEightSuggestions;
- (id)fourByFourSuggestions;
- (id)initWithCoder:(id)arg1;
- (id)initWithLayoutType:(long long)arg1 oneByOneSuggestions:(id)arg2 oneByTwoSuggestions:(id)arg3 twoByTwoSuggestions:(id)arg4 oneByFourSuggestions:(id)arg5 twoByFourSuggestions:(id)arg6 fourByFourSuggestions:(id)arg7 fourByEightSuggestions:(id)arg8;
- (id)initWithLayoutType:(long long)arg1 oneByOneSuggestions:(id)arg2 oneByTwoSuggestions:(id)arg3 twoByTwoSuggestions:(id)arg4 oneByFourSuggestions:(id)arg5 twoByFourSuggestions:(id)arg6 fourByFourSuggestions:(id)arg7 fourByEightSuggestions:(id)arg8 uuid:(id)arg9;
- (id)initWithLayoutType:(long long)arg1 oneByOneSuggestions:(id)arg2 oneByTwoSuggestions:(id)arg3 twoByTwoSuggestions:(id)arg4 oneByFourSuggestions:(id)arg5 twoByFourSuggestions:(id)arg6 fourByFourSuggestions:(id)arg7 fourByEightSuggestions:(id)arg8 uuid:(id)arg9 layoutScore:(double)arg10 isValidForSuggestionsWidget:(bool)arg11 confidenceWarrantsSnappingOrNPlusOne:(bool)arg12 isNPlusOne:(bool)arg13 isLowConfidenceStackRotationForStaleStack:(bool)arg14 widgetUniqueId:(id)arg15 uuidOfHighestConfidenceSuggestion:(id)arg16 numWidgetsInStack:(unsigned long long)arg17;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isLowConfidenceStackRotationForStaleStack;
- (bool)isNPlusOne;
- (bool)isShortcutConversion;
- (bool)isValidForSuggestionsWidget;
- (id)jsonRawData;
- (double)layoutScore;
- (long long)layoutType;
- (id)minSuggestionListInLayout;
- (unsigned long long)numWidgetsInStack;
- (id)oneByFourSuggestions;
- (id)oneByOneSuggestions;
- (id)oneByTwoSuggestions;
- (id)proto;
- (void)setConfidenceWarrantsSnappingOrNPlusOne:(bool)arg1;
- (void)setFourByEightSuggestions:(id)arg1;
- (void)setFourByFourSuggestions:(id)arg1;
- (void)setIsLowConfidenceStackRotationForStaleStack:(bool)arg1;
- (void)setIsNPlusOne:(bool)arg1;
- (void)setIsValidForSuggestionsWidget:(bool)arg1;
- (void)setLayoutScore:(double)arg1;
- (void)setNumWidgetsInStack:(unsigned long long)arg1;
- (void)setOneByFourSuggestions:(id)arg1;
- (void)setOneByOneSuggestions:(id)arg1;
- (void)setOneByTwoSuggestions:(id)arg1;
- (void)setTwoByFourSuggestions:(id)arg1;
- (void)setTwoByTwoSuggestions:(id)arg1;
- (void)setUuid:(id)arg1;
- (void)setUuidOfHighestConfidenceSuggestion:(id)arg1;
- (void)setWidgetUniqueId:(id)arg1;
- (id)suggestionWithUUID:(id)arg1;
- (id)twoByFourSuggestions;
- (id)twoByTwoSuggestions;
- (id)uuid;
- (id)uuidOfHighestConfidenceSuggestion;
- (id)widgetUniqueId;

// Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal

+ (id)uiLayoutTypesForStackLayoutSize:(unsigned long long)arg1;

@end
