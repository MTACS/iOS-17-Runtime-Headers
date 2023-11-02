
@interface PatternExecutionResult : NSObject {
    NSArray * _dialog;
    NSDictionary * _meta;
    NSString * _patternId;
    unsigned long long  _patternType;
    NSNumber * _printSupportingDialog;
    NSString * _responseMode;
    NSData * _visual;
    PatternVisualInfo * _visualInfo;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, retain) NSArray *dialog;
@property (nonatomic, retain) NSDictionary *meta;
@property (nonatomic, retain) NSString *patternId;
@property (nonatomic) unsigned long long patternType;
@property (nonatomic, retain) NSNumber *printSupportingDialog;
@property (nonatomic, retain) NSString *responseMode;
@property (nonatomic, retain) NSData *visual;
@property (nonatomic, retain) PatternVisualInfo *visualInfo;

// Image: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine

- (void).cxx_destruct;
- (void)append:(id)arg1;
- (id)dialog;
- (id)meta;
- (id)patternId;
- (unsigned long long)patternType;
- (id)printSupportingDialog;
- (id)responseMode;
- (void)setDialog:(id)arg1;
- (void)setMeta:(id)arg1;
- (void)setPatternId:(id)arg1;
- (void)setPatternType:(unsigned long long)arg1;
- (void)setPrintSupportingDialog:(id)arg1;
- (void)setResponseMode:(id)arg1;
- (void)setVisual:(id)arg1;
- (void)setVisualInfo:(id)arg1;
- (id)visual;
- (id)visualInfo;
- (id)visualToJsonDictionary;
- (id)visualToString;

// Image: /System/Library/PrivateFrameworks/HomeAutomationInternal.framework/HomeAutomationInternal

- (id)description;

@end
