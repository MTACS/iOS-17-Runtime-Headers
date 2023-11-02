
@interface WebHTMLRepresentationPrivate : NSObject {
    WebDataSource * dataSource;
    bool  hasSentResponseToPlugin;
    bool  includedInWebKitStatistics;
    <WebPluginManualLoader> * manualLoader;
    WAKView * pluginView;
}

@end
