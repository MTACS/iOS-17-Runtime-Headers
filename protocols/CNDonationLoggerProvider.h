
@protocol CNDonationLoggerProvider <NSObject>

@required

- (<CNDonationAccountLogger> *)accountLogger;
- (<CNDonationAgentLogger> *)agentLogger;
- (<CNDonationAnalyticsLogger> *)analyticsLogger;
- (<CNDonationManagedDuplicatesLogger> *)duplicatesLogger;
- (<CNDonationExtensionLogger> *)extensionLogger;
- (<CNDonationPreferencesLogger> *)preferencesLogger;
- (<CNDonationToolLogger> *)toolLogger;

@end
