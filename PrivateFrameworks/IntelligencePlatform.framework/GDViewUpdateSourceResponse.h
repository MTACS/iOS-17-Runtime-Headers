
@interface GDViewUpdateSourceResponse : NSObject <NSSecureCoding> {
    NSData * _bookmark;
    GDSourceListenerConfigIdentifier * _configIdentifier;
    NSString * _response;
}

@property (nonatomic, readonly) NSData *bookmark;
@property (nonatomic, readonly) GDSourceListenerConfigIdentifier *configIdentifier;
@property (nonatomic, readonly) NSString *response;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bookmark;
- (id)configIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfigIdentifier:(id)arg1 bookmark:(id)arg2 response:(id)arg3;
- (id)response;

@end
