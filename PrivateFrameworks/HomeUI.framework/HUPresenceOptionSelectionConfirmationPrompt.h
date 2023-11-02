
@interface HUPresenceOptionSelectionConfirmationPrompt : NSObject {
    NSString * _alertBody;
    NSString * _alertTitle;
    bool  _resetLocationToHomeOnConfirmation;
}

@property (nonatomic, readonly, copy) NSString *alertBody;
@property (nonatomic, readonly, copy) NSString *alertTitle;
@property (nonatomic, readonly) bool resetLocationToHomeOnConfirmation;

- (void).cxx_destruct;
- (id)alertBody;
- (id)alertTitle;
- (id)init;
- (id)initWithAlertTitle:(id)arg1 alertBody:(id)arg2 resetLocationToHomeOnConfirmation:(bool)arg3;
- (bool)resetLocationToHomeOnConfirmation;

@end
