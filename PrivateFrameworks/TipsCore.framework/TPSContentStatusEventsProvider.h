
@interface TPSContentStatusEventsProvider : TPSEventsProvider {
    TPSTipStatusController * _tipStatusController;
}

- (void).cxx_destruct;
- (bool)_isStatusType:(long long)arg1 observedInStatus:(id)arg2;
- (bool)_isStatusType:(long long)arg1 observedInStatuses:(id)arg2;
- (id)init;
- (void)queryEvents:(id)arg1;

@end
