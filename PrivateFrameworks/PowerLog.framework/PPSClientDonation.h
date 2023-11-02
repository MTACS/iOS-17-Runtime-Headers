
@interface PPSClientDonation : NSObject

+ (struct PPSTelemetryIdentifier { BOOL x1[512]; BOOL x2[512]; }*)createIdentifierForSubsystem:(const char *)arg1 category:(const char *)arg2;
+ (bool)isRegisteredSubsystem:(const char *)arg1 category:(const char *)arg2;
+ (void)sendEventWithIdentifier:(const struct PPSTelemetryIdentifier { BOOL x1[512]; BOOL x2[512]; }*)arg1 payload:(struct __CFDictionary { }*)arg2;

@end
