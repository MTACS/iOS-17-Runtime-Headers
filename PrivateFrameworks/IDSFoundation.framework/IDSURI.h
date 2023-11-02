
@interface IDSURI : NSObject <IDSDestinationProtocol, NSCopying, NSSecureCoding> {
    NSString * _prefixedURI;
    NSString * _serviceLoggingHint;
}

@property (nonatomic, readonly) long long FZIDType;
@property (nonatomic, readonly) long long IDSIDType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isTemporaryURI;
@property (nonatomic, readonly) bool isTokenURI;
@property (nonatomic, retain) NSString *prefixedURI;
@property (nonatomic, readonly) IDSPushToken *pushToken;
@property (nonatomic, retain) NSString *serviceLoggingHint;
@property (readonly) Class superclass;
@property (nonatomic, readonly) IDSURI *tokenFreeURI;
@property (nonatomic, readonly) NSString *unprefixedURI;

+ (id)URIWithPrefixedURI:(id)arg1;
+ (id)URIWithPrefixedURI:(id)arg1 withServiceLoggingHint:(id)arg2;
+ (id)URIWithUnprefixedURI:(id)arg1;
+ (id)URIWithUnprefixedURI:(id)arg1 withServiceLoggingHint:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)FZIDType;
- (long long)IDSIDType;
- (id)URIByAddingOptionalPushToken:(id)arg1;
- (id)URIByAddingPushToken:(id)arg1;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)destinationURIs;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPrefixedURI:(id)arg1;
- (id)initWithPrefixedURI:(id)arg1 withServiceLoggingHint:(id)arg2;
- (id)initWithUnprefixedURI:(id)arg1;
- (id)initWithUnprefixedURI:(id)arg1 withServiceLoggingHint:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToURI:(id)arg1;
- (bool)isTemporaryURI;
- (bool)isTokenURI;
- (id)prefixedURI;
- (id)pushToken;
- (id)serviceLoggingHint;
- (void)setPrefixedURI:(id)arg1;
- (void)setServiceLoggingHint:(id)arg1;
- (id)tokenFreeURI;
- (id)unprefixedURI;

@end
