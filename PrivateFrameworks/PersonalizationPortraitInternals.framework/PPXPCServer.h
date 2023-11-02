
@interface PPXPCServer : NSObject

+ (void)_registerConfigListener;
+ (void)_registerConnectionsListener;
+ (void)_registerContactListener;
+ (void)_registerEventListener;
+ (void)_registerInternalListener;
+ (void)_registerLocationReadOnlyListener;
+ (void)_registerLocationReadWriteListener;
+ (void)_registerNamedEntityReadOnlyListener;
+ (void)_registerNamedEntityReadWriteListener;
+ (void)_registerQuickTypeListener;
+ (void)_registerSocialHighlightListener;
+ (void)_registerStringDonationListener;
+ (void)_registerTemporalClusterListener;
+ (void)_registerTopicReadOnlyListener;
+ (void)_registerTopicReadWriteListener;
+ (void)registerXPCListeners;

@end
