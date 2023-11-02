
@interface IDSFirewallEntry : NSObject <NSCopying, NSSecureCoding> {
    bool  _isDonated;
    NSDate * _lastSeen;
    NSString * _mergeID;
    IDSURI * _uri;
}

@property (nonatomic) bool isDonated;
@property (nonatomic, readonly) NSDate *lastSeen;
@property (nonatomic, retain) NSString *mergeID;
@property (nonatomic, readonly) IDSURI *uri;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURI:(id)arg1;
- (id)initWithURI:(id)arg1 andLastSeenDate:(id)arg2;
- (bool)isDonated;
- (bool)isEqual:(id)arg1;
- (id)lastSeen;
- (id)mergeID;
- (void)setIsDonated:(bool)arg1;
- (void)setMergeID:(id)arg1;
- (id)uri;

@end
