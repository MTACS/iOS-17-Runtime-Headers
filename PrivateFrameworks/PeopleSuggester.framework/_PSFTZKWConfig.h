
@interface _PSFTZKWConfig : NSObject {
    _PSZKWFTCalendarEventConfig * _calendarEventConfig;
    _PSZKWFTPrimaryInteractionsConfig * _faceTimeInteractionsConfig;
    _PSZKWFTFallbackInteractionsConfig * _fallbackInteractionsConfig;
    _PSZKWFTUnstructuredCalendarConfig * _unstructuredCalendarConfig;
    _PSZKWFTUnstructuredRemindersConfig * _unstructuredRemindersConfig;
    bool  _useBlendingLayer;
}

@property (nonatomic, readonly, copy) _PSZKWFTCalendarEventConfig *calendarEventConfig;
@property (nonatomic, readonly, copy) _PSZKWFTPrimaryInteractionsConfig *faceTimeInteractionsConfig;
@property (nonatomic, readonly, copy) _PSZKWFTFallbackInteractionsConfig *fallbackInteractionsConfig;
@property (nonatomic, readonly, copy) _PSZKWFTUnstructuredCalendarConfig *unstructuredCalendarConfig;
@property (nonatomic, readonly, copy) _PSZKWFTUnstructuredRemindersConfig *unstructuredRemindersConfig;
@property (nonatomic) bool useBlendingLayer;

+ (bool)onNonUIBuild;
+ (bool)useBlendingLayer;

- (void).cxx_destruct;
- (id)calendarEventConfig;
- (id)faceTimeInteractionsConfig;
- (id)fallbackInteractionsConfig;
- (id)init;
- (id)initWithTrialData:(id)arg1;
- (void)setUseBlendingLayer:(bool)arg1;
- (id)unstructuredCalendarConfig;
- (id)unstructuredRemindersConfig;
- (bool)useBlendingLayer;

@end
