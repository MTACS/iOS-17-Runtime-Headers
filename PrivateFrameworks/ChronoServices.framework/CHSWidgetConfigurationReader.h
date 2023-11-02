
@interface CHSWidgetConfigurationReader : NSObject {
    CHSChronoServicesConnection * _connection;
}

- (void).cxx_destruct;
- (id)_transformResults:(id)arg1;
- (void)allConfiguredWidgetsWithCompletion:(id /* block */)arg1;
- (id)init;

@end
