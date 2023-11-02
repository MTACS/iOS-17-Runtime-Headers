
@interface SKPresenceOptions : NSObject <NSSecureCoding> {
    IDSURI * _clientSpecifiedURI;
    bool  _isPersonal;
    NSString * _serviceIdentifier;
}

@property (nonatomic, retain) IDSURI *clientSpecifiedURI;
@property (nonatomic) bool isPersonal;
@property (nonatomic, retain) NSString *serviceIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)clientSpecifiedURI;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithServiceIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isPersonal;
- (id)serviceIdentifier;
- (void)setClientSpecifiedURI:(id)arg1;
- (void)setIsPersonal:(bool)arg1;
- (void)setServiceIdentifier:(id)arg1;

@end
