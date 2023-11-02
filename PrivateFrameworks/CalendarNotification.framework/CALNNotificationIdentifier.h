
@interface CALNNotificationIdentifier : NSObject <NSCopying> {
    NSString * _sourceClientIdentifier;
    NSString * _sourceIdentifier;
    NSString * _stringRepresentation;
}

@property (nonatomic, readonly, copy) NSString *sourceClientIdentifier;
@property (nonatomic, readonly, copy) NSString *sourceIdentifier;
@property (nonatomic, readonly, copy) NSString *stringRepresentation;

+ (id)_allowedCharacterSetForEncodingNotificationIdentifierComponents;
+ (id)_constructNotificationIdentifierStringRepresentationFromComponents:(id)arg1;
+ (id)_deconstructNotificationIdentifierStringRepresentationIntoComponents:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithSourceIdentifier:(id)arg1 sourceClientIdentifier:(id)arg2;
- (id)initWithSourceIdentifier:(id)arg1 sourceClientIdentifier:(id)arg2 stringRepresentation:(id)arg3;
- (id)initWithStringRepresentation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToNotificationIdentifier:(id)arg1;
- (id)sourceClientIdentifier;
- (id)sourceIdentifier;
- (id)stringRepresentation;

@end
