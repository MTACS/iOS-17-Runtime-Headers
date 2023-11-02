
@interface GKFriendRequestInternal : GKFamiliarPlayerInternal {
    NSDate * _date;
    NSString * _message;
}

@property (nonatomic, retain) NSDate *date;
@property (nonatomic, retain) NSString *message;

+ (id)secureCodedPropertyKeys;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)date;
- (int)defaultFamiliarity;
- (id)message;
- (void)setDate:(id)arg1;
- (void)setMessage:(id)arg1;

@end
