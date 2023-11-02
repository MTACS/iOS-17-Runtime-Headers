
@interface CNChangeHistoryClearRequest : NSObject <NSSecureCoding> {
    NSString * _clientIdentifier;
    NSArray * _contactChangeIDs;
    NSString * _containerIdentifier;
    NSArray * _groupChangeIDs;
    CNChangeHistoryAnchor * _toChangeAnchor;
}

@property (nonatomic, readonly) NSString *clientIdentifier;
@property (nonatomic, retain) NSArray *contactChangeIDs;
@property (nonatomic, retain) NSString *containerIdentifier;
@property (nonatomic, retain) NSArray *groupChangeIDs;
@property (nonatomic, retain) CNChangeHistoryAnchor *toChangeAnchor;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)clientIdentifier;
- (id)contactChangeIDs;
- (id)containerIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)groupChangeIDs;
- (id)initWithClientIdentifier:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setContactChangeIDs:(id)arg1;
- (void)setContainerIdentifier:(id)arg1;
- (void)setGroupChangeIDs:(id)arg1;
- (void)setToChangeAnchor:(id)arg1;
- (id)toChangeAnchor;

@end
