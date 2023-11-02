
@interface DDUIPairCompleteMessage : NSObject {
    NSDictionary * _cancellationReason;
    bool  _isCancellation;
    NSUUID * _listenerUUID;
    unsigned long long  _notificationResult;
}

@property (nonatomic, readonly) NSDictionary *cancellationReason;
@property (nonatomic) bool isCancellation;
@property (nonatomic, readonly) NSUUID *listenerUUID;
@property (nonatomic, readonly) unsigned long long notificationResult;

- (void).cxx_destruct;
- (id)cancellationReason;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithCancellationReason:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithNotificationResult:(unsigned long long)arg1;
- (id)initWithNotificationResult:(unsigned long long)arg1 listenerUUID:(id)arg2;
- (bool)isCancellation;
- (id)listenerUUID;
- (unsigned long long)notificationResult;
- (void)setIsCancellation:(bool)arg1;

@end
