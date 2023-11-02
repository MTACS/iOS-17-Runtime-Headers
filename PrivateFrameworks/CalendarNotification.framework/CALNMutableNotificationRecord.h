
@interface CALNMutableNotificationRecord : CALNNotificationRecord <NSCopying>

@property (nonatomic, copy) CALNNotificationContent *content;
@property (nonatomic, copy) NSDate *date;
@property (nonatomic) bool shouldPlaySound;
@property (nonatomic) bool shouldPresentAlert;
@property (nonatomic, copy) NSString *sourceClientIdentifier;
@property (nonatomic, copy) NSString *sourceIdentifier;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setContent:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setShouldPlaySound:(bool)arg1;
- (void)setShouldPresentAlert:(bool)arg1;
- (void)setSourceClientIdentifier:(id)arg1;
- (void)setSourceIdentifier:(id)arg1;

@end
