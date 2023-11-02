
@interface HMDRemoteMessageSerialization : HMFObject

+ (id)dictionaryForMessage:(id)arg1 error:(id*)arg2;
+ (bool)legacyNotificationMessage:(id)arg1;
+ (id)remoteMessageWithDictionary:(id)arg1 error:(id*)arg2;

@end
