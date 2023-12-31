
@interface UNPushNotificationTrigger : UNNotificationTrigger {
    bool  _isContentAvailable;
    bool  _isMutableContent;
}

@property (nonatomic, readonly) bool isContentAvailable;
@property (nonatomic, readonly) bool isMutableContent;

+ (bool)supportsSecureCoding;
+ (id)triggerWithContentAvailable:(bool)arg1 mutableContent:(bool)arg2;

- (id)_initWithContentAvailable:(bool)arg1 mutableContent:(bool)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isContentAvailable;
- (bool)isEqual:(id)arg1;
- (bool)isMutableContent;

@end
