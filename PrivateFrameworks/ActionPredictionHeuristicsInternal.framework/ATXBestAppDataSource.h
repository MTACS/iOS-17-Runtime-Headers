
@interface ATXBestAppDataSource : NSObject {
    UABestAppSuggestionManager * _bestAppSuggestionManager;
    ATXHeuristicDevice * _device;
}

- (void).cxx_destruct;
- (void)bestAppSuggestionWithCallback:(id /* block */)arg1;
- (id)initWithDevice:(id)arg1;

@end
