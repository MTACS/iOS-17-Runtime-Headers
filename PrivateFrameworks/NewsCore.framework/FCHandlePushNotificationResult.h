
@interface FCHandlePushNotificationResult : NSObject <NSCopying> {
    bool  _handled;
    NSSet * _recordZoneIDs;
}

@property (getter=wasHandled, nonatomic, readonly) bool handled;
@property (nonatomic, readonly) NSSet *recordZoneIDs;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)recordZoneIDs;
- (bool)wasHandled;

@end
