
@interface SiriSharedUIUserUtteranceEditingDataManager : NSObject <SiriSharedUIUserUtteranceEditingDataManaging> {
    NSArray * _alternativeDisplayStrings;
    bool  _clientAlternativePresented;
    NSString * _refId;
    NSMutableDictionary * _userSelectionResultsMap;
    AFUserUtterance * _userUtterance;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) AFUserUtterance *userUtterance;

- (void).cxx_destruct;
- (void)_createAlternativeDisplayStringsAndMap;
- (void)_updateSelectionResults:(id)arg1 interactionId:(id)arg2;
- (id)attributedStringAtIndex:(long long)arg1;
- (id)initWithUserUtterance:(id)arg1 backingAceObjectRefId:(id)arg2;
- (bool)isEditedTextSameAsUtterance:(id)arg1;
- (long long)numberOfAlternativeUtterances;
- (id)selectionResultsForAlternateTextAtIndex:(long long)arg1;
- (id)selectionResultsForEditedText:(id)arg1;
- (id)userUtterance;

@end
