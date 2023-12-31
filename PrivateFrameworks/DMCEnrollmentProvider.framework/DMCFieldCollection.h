
@interface DMCFieldCollection : NSObject {
    DMCPayloadUserInputField * _currentField;
    long long  _currentFieldIndex;
    long long  _currentPayloadIndex;
    bool  _isFinalField;
    NSMutableArray * _payloadFieldArrays;
}

- (void).cxx_destruct;
- (void)_setCurrentFieldToCurrentIndices;
- (void)_setIsFinalField;
- (id)currentField;
- (bool)currentFieldIsFinalField;
- (bool)currentFieldIsLastInPayload;
- (bool)currentFieldIsSinglePasswordField;
- (long long)currentPayloadIndex;
- (id)initWithUserInput:(id)arg1;
- (void)moveToNextField;
- (id)responseDictionariesForCurrentPayload;
- (void)restartCurrentPayload;
- (id)userInputResponses;

@end
