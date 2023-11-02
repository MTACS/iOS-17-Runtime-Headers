
@interface DNDWebApplicationIdentifier : NSObject <DNDDiffBuilding, DNDEventSourceIdentifying, DNDSBackingStoreRecord> {
    NSString * _givenName;
    NSString * _webIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *givenName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long platform;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *webIdentifier;

// Image: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)diffAgainstObject:(id)arg1 usingDiffBuilder:(id)arg2 withDescription:(id)arg3;
- (id)diffDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)givenName;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithWebIdentifier:(id)arg1 givenName:(id)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)platform;
- (id)webIdentifier;

// Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer

+ (id)newWithDictionaryRepresentation:(id)arg1 context:(id)arg2;

- (id)dictionaryRepresentationWithContext:(id)arg1;

@end
