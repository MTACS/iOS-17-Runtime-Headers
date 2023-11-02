
@interface BSUIDateLabelFactory : NSObject {
    NSMutableDictionary * _recycledLabelsByStyle;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_purgeRecycledLabels;
- (id)combinedDateLabelWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 allDay:(bool)arg4 forStyle:(long long)arg5;
- (void)dealloc;
- (id)endLabelWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 allDay:(bool)arg4 forStyle:(long long)arg5;
- (id)init;
- (void)recycleLabel:(id)arg1;
- (id)startLabelWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 allDay:(bool)arg4 forStyle:(long long)arg5;
- (long long)styleForLabel:(id)arg1;

@end
