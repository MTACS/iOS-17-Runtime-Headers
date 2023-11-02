
@interface FBKSDeviceToken : NSObject

+ (id)_basicParameterWithoutLabel;
+ (id)_basicParametersForWriting;
+ (id)_queryForParticipantID:(id)arg1 isForWriting:(bool)arg2;
+ (void)clearAllDeviceTokens;
+ (void)clearDeviceTokenForParticipantID:(id)arg1;
+ (id)fetchDeviceTokenForParticipantID:(id)arg1;
+ (void)setDeviceToken:(id)arg1 forParticipantID:(id)arg2;

@end
