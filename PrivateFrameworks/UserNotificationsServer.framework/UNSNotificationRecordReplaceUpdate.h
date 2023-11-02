
@interface UNSNotificationRecordReplaceUpdate : UNSNotificationRecordUpdate {
    UNSNotificationRecord * _replacedNotificationRecord;
    bool  _shouldRepost;
}

@property (nonatomic, readonly) UNSNotificationRecord *replacedNotificationRecord;
@property (nonatomic, readonly) bool shouldRepost;

+ (id)updateWithNotificationRecord:(id)arg1 replacedNotificationRecord:(id)arg2 shouldRepost:(bool)arg3;

- (void).cxx_destruct;
- (id)_initWithNotificationRecord:(id)arg1 replacedNotificationRecord:(id)arg2 shouldRepost:(bool)arg3;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)replacedNotificationRecord;
- (bool)shouldRepost;

@end
