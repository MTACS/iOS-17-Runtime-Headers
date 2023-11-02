
@protocol ACUISActivityAlertClientDelegate <NSObject>

@optional

- (void)activityAlertClient:(ACUISActivityAlertClient *)arg1 dismissAlertProvider:(id <ACUISActivityAlertProviding>)arg2;
- (void)activityAlertClient:(void *)arg1 presentAlertProvider:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: ACUISActivityAlertClient *, <ACUISActivityAlertProviding> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
