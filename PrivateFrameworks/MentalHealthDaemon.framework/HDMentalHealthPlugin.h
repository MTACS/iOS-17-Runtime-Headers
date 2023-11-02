
@interface HDMentalHealthPlugin : NSObject <HDDemoDataGeneratorProvider, HDPlugin, HDTaskServerClassProvider> {
    <HDMHTypicalDayProviding> * _typicalDayProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *pluginIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)demoDataGeneratorClasses;
- (id)extensionForHealthDaemon:(id)arg1;
- (id)extensionForProfile:(id)arg1;
- (void)handleDatabaseObliteration;
- (id)init;
- (id)initWithTypicalDayProvider:(id)arg1;
- (id)pluginIdentifier;
- (id)taskServerClasses;

@end
