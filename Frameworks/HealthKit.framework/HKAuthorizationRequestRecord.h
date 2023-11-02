
@interface HKAuthorizationRequestRecord : NSObject <NSSecureCoding> {
    NSUUID * _sessionIdentifier;
    HKSource * _source;
    NSSet * _typesRequiringReadAuthorization;
    NSSet * _typesRequiringShareAuthorization;
}

@property (nonatomic, readonly, copy) NSUUID *sessionIdentifier;
@property (nonatomic, readonly, copy) HKSource *source;
@property (nonatomic, readonly, copy) NSSet *typesRequiringReadAuthorization;
@property (nonatomic, readonly, copy) NSSet *typesRequiringShareAuthorization;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSource:(id)arg1 session:(id)arg2 readTypes:(id)arg3 writeTypes:(id)arg4;
- (id)sessionIdentifier;
- (id)source;
- (id)typesRequiringReadAuthorization;
- (id)typesRequiringShareAuthorization;

@end
