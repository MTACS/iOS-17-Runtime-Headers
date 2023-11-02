
@interface PatternExecutionDialog : NSObject {
    NSString * _dialogId;
    NSString * _fullPrint;
    NSString * _fullSpeak;
    NSString * _groupName;
    NSNumber * _printOnly;
    NSNumber * _spokenOnly;
    NSString * _supportingPrint;
    NSString * _supportingSpeak;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, retain) NSString *dialogId;
@property (nonatomic, retain) NSString *fullPrint;
@property (nonatomic, retain) NSString *fullSpeak;
@property (nonatomic, retain) NSString *groupName;
@property (nonatomic, retain) NSNumber *printOnly;
@property (nonatomic, retain) NSNumber *spokenOnly;
@property (nonatomic, retain) NSString *supportingPrint;
@property (nonatomic, retain) NSString *supportingSpeak;

// Image: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine

- (void).cxx_destruct;
- (id)dialogId;
- (id)fullPrint;
- (id)fullSpeak;
- (id)groupName;
- (id)printOnly;
- (void)setDialogId:(id)arg1;
- (void)setFullPrint:(id)arg1;
- (void)setFullSpeak:(id)arg1;
- (void)setGroupName:(id)arg1;
- (void)setPrintOnly:(id)arg1;
- (void)setSpokenOnly:(id)arg1;
- (void)setSupportingPrint:(id)arg1;
- (void)setSupportingSpeak:(id)arg1;
- (id)spokenOnly;
- (id)supportingPrint;
- (id)supportingSpeak;

// Image: /System/Library/PrivateFrameworks/HomeAutomationInternal.framework/HomeAutomationInternal

- (id)description;

@end
