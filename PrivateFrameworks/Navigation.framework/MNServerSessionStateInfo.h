
@interface MNServerSessionStateInfo : NSObject <NSCopying, NSSecureCoding> {
    NSData * _directionsResponseID;
    NSData * _etauResponseID;
    NSData * _sessionState;
    NSUUID * _uniqueRouteID;
}

@property (nonatomic, readonly) NSData *directionsResponseID;
@property (nonatomic, readonly) NSData *etauResponseID;
@property (nonatomic, readonly) NSData *sessionState;
@property (nonatomic, readonly) NSUUID *uniqueRouteID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)directionsResponseID;
- (void)encodeWithCoder:(id)arg1;
- (id)etauResponseID;
- (id)initWithCoder:(id)arg1;
- (id)sessionState;
- (id)uniqueRouteID;
- (void)updateWithETAUResponse:(id)arg1;
- (void)updateWithRoute:(id)arg1;
- (void)updateWithSessionState:(id)arg1;

@end
