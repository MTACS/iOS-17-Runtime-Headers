
@interface CALNNotificationIdentifierComponents : NSObject {
    NSString * _sourceClientIdentifier;
    NSString * _sourceIdentifier;
}

@property (nonatomic, readonly, copy) NSString *sourceClientIdentifier;
@property (nonatomic, readonly, copy) NSString *sourceIdentifier;

- (void).cxx_destruct;
- (id)description;
- (id)initWithSourceIdentifier:(id)arg1 sourceClientIdentifier:(id)arg2;
- (id)sourceClientIdentifier;
- (id)sourceIdentifier;

@end
