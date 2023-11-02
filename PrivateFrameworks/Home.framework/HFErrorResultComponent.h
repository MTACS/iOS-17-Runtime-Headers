
@interface HFErrorResultComponent : HFItemResultComponent {
    unsigned long long  _badgeType;
    unsigned long long  _category;
    unsigned long long  _descriptionBadgeType;
    NSString * _detailedErrorDescription;
    long long  _displayPriority;
    NSString * _errorDescription;
    NSURL * _errorHandlerURL;
    NSString * _errorHandlerURLText;
    NSString * _errorMessageButtonTitle;
    NSString * _errorMessageTitle;
    HMSymptom * _underlyingSymptom;
    bool  _updateInProgress;
}

@property (nonatomic) unsigned long long badgeType;
@property (nonatomic, readonly) unsigned long long category;
@property (nonatomic) unsigned long long descriptionBadgeType;
@property (nonatomic, copy) NSString *detailedErrorDescription;
@property (nonatomic) long long displayPriority;
@property (nonatomic, copy) NSString *errorDescription;
@property (nonatomic, copy) NSURL *errorHandlerURL;
@property (nonatomic, copy) NSString *errorHandlerURLText;
@property (nonatomic, copy) NSString *errorMessageButtonTitle;
@property (nonatomic, copy) NSString *errorMessageTitle;
@property (nonatomic, retain) HMSymptom *underlyingSymptom;
@property (nonatomic) bool updateInProgress;

+ (long long)_displayPriorityForSymptom:(id)arg1;
+ (bool)_requiresManualFixOptionToDisplaySymptom:(id)arg1;
+ (id)componentForAccessoryReprovisionState:(unsigned long long)arg1;
+ (id)componentForDisplayError:(id)arg1 symptomContextProvider:(id)arg2;
+ (id)componentForSymptom:(id)arg1 contextProvider:(id)arg2;
+ (id)componentForUnreachableAccessoryWithContextProvider:(id)arg1;
+ (id)componentForWriteErrorForCharacteristics:(id)arg1 valueSource:(id)arg2;
+ (long long)priorityForCategory:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_addAccountSymptomMessageForAccountName:(id)arg1 symptom:(id)arg2;
- (unsigned long long)badgeType;
- (unsigned long long)category;
- (long long)componentPriority;
- (id)description;
- (unsigned long long)descriptionBadgeType;
- (id)detailedErrorDescription;
- (long long)displayPriority;
- (id)errorDescription;
- (id)errorHandlerURL;
- (id)errorHandlerURLText;
- (id)errorMessageButtonTitle;
- (id)errorMessageTitle;
- (id)init;
- (id)initWithCategory:(unsigned long long)arg1;
- (id)results;
- (void)setBadgeType:(unsigned long long)arg1;
- (void)setDescriptionBadgeType:(unsigned long long)arg1;
- (void)setDetailedErrorDescription:(id)arg1;
- (void)setDisplayPriority:(long long)arg1;
- (void)setErrorDescription:(id)arg1;
- (void)setErrorHandlerURL:(id)arg1;
- (void)setErrorHandlerURLText:(id)arg1;
- (void)setErrorMessageButtonTitle:(id)arg1;
- (void)setErrorMessageTitle:(id)arg1;
- (void)setUnderlyingSymptom:(id)arg1;
- (void)setUpdateInProgress:(bool)arg1;
- (id)underlyingSymptom;
- (bool)updateInProgress;

@end
