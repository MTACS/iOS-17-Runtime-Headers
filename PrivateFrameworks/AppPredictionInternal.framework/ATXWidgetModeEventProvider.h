
@interface ATXWidgetModeEventProvider : NSObject {
    ATXInformationStore * _informationStore;
}

- (void).cxx_destruct;
- (id)initWithInformationStore:(id)arg1;
- (id)widgetEngagementCountSinceStartDate:(id)arg1;
- (id)widgetModeEventsBetweenStartDate:(id)arg1 endDate:(id)arg2;

@end
