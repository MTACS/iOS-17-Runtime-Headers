
@interface ICSystemPaperDismissAction : BSAction

@property (nonatomic, readonly, copy) NSString *dismissalReason;

- (bool)_expectsResponse;
- (id)dismissalReason;
- (id)initWithReason:(id)arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;

@end
