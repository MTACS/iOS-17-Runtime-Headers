
@interface APSLog : NSObject

+ (id)PUSHTRACE;
+ (id)activityTracking;
+ (id)alert;
+ (id)certificate;
+ (id)connection;
+ (id)connectionServer;
+ (id)courier;
+ (id)courierOversized;
+ (id)daemon;
+ (id)database;
+ (id)main;
+ (id)networking;
+ (id)nonce;
+ (id)preference;
+ (id)protocolParser;
+ (id)protocolParserDetailed;
+ (id)proxy;
+ (id)pubSub;
+ (id)pushHistory;
+ (bool)shouldPowerLogEvent:(id)arg1;
+ (id)simulator;
+ (id)stream;
+ (id)taskManager;
+ (id)telemetry;
+ (id)topicManager;
+ (id)topicManagerOversized;
+ (id)ttlCollection;
+ (id)xpc;

@end
