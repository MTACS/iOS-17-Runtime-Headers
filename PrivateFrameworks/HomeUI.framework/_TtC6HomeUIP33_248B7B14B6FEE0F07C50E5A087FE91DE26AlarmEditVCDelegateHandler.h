
@interface _TtC6HomeUIP33_248B7B14B6FEE0F07C50E5A087FE91DE26AlarmEditVCDelegateHandler : NSObject <HUAlarmEditViewControllerDelegate> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  parentContainerID;
    void vc;
}

- (void).cxx_destruct;
- (void)alarmEditController:(id)arg1 didAddAlarm:(id)arg2;
- (void)alarmEditController:(id)arg1 didDeleteAlarm:(id)arg2;
- (void)alarmEditController:(id)arg1 didEditAlarm:(id)arg2;
- (void)alarmEditControllerDidCancel:(id)arg1;
- (void)alarmEditControllerGettingDismissed:(id)arg1;
- (id)init;

@end
