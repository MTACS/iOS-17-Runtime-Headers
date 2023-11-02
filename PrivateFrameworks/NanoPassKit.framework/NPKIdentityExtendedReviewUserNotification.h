
@interface NPKIdentityExtendedReviewUserNotification : NPKUserNotification {
    unsigned long long  _documentType;
    NSString * _issuerName;
    unsigned long long  _notificationType;
}

@property (nonatomic, readonly) unsigned long long documentType;
@property (nonatomic, readonly) NSString *issuerName;
@property (nonatomic, readonly) unsigned long long notificationType;

- (void).cxx_destruct;
- (id)body;
- (unsigned long long)documentType;
- (id)identifierHashComponents;
- (id)initWithNotificationType:(unsigned long long)arg1 documentType:(unsigned long long)arg2 issuerName:(id)arg3;
- (id)issuerName;
- (unsigned long long)notificationType;
- (id)title;

@end
