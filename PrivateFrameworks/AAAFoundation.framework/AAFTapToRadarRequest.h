
@interface AAFTapToRadarRequest : NSObject {
    NSString * _alertCancelButtonText;
    NSString * _alertDefaultButtonText;
    NSString * _alertMessage;
    id /* block */  _alertOtherButtonAction;
    NSString * _alertOtherButtonText;
    NSString * _alertTitle;
    NSString * _componentID;
    NSString * _componentName;
    NSString * _componentVersion;
    NSArray * _keywordIDs;
    NSArray * _keywords;
    NSString * _radarDescription;
    NSString * _radarTitle;
}

@property (nonatomic, copy) NSString *alertCancelButtonText;
@property (nonatomic, copy) NSString *alertDefaultButtonText;
@property (nonatomic, copy) NSString *alertMessage;
@property (nonatomic, copy) id /* block */ alertOtherButtonAction;
@property (nonatomic, copy) NSString *alertOtherButtonText;
@property (nonatomic, copy) NSString *alertTitle;
@property (nonatomic, copy) NSString *componentID;
@property (nonatomic, copy) NSString *componentName;
@property (nonatomic, copy) NSString *componentVersion;
@property (nonatomic, retain) NSArray *keywordIDs;
@property (nonatomic, retain) NSArray *keywords;
@property (nonatomic, copy) NSString *radarDescription;
@property (nonatomic, copy) NSString *radarTitle;

- (void).cxx_destruct;
- (id)alertCancelButtonText;
- (id)alertDefaultButtonText;
- (id)alertMessage;
- (id /* block */)alertOtherButtonAction;
- (id)alertOtherButtonText;
- (id)alertTitle;
- (id)componentID;
- (id)componentName;
- (id)componentVersion;
- (id)formattedKeywords;
- (id)keywordIDs;
- (id)keywords;
- (id)radarDescription;
- (id)radarTitle;
- (void)setAlertCancelButtonText:(id)arg1;
- (void)setAlertDefaultButtonText:(id)arg1;
- (void)setAlertMessage:(id)arg1;
- (void)setAlertOtherButtonAction:(id /* block */)arg1;
- (void)setAlertOtherButtonText:(id)arg1;
- (void)setAlertTitle:(id)arg1;
- (void)setComponentID:(id)arg1;
- (void)setComponentName:(id)arg1;
- (void)setComponentVersion:(id)arg1;
- (void)setKeywordIDs:(id)arg1;
- (void)setKeywords:(id)arg1;
- (void)setRadarDescription:(id)arg1;
- (void)setRadarTitle:(id)arg1;

@end
