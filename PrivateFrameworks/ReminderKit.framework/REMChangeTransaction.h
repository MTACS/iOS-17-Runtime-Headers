
@interface REMChangeTransaction : NSObject <NSCopying, NSSecureCoding> {
    REMObjectID * _accountID;
    NSString * _author;
    NSArray * _changes;
    NSString * _storeID;
    NSDate * _timestamp;
    REMChangeToken * _token;
}

@property (nonatomic, readonly) REMObjectID *accountID;
@property (nonatomic, readonly) NSString *author;
@property (nonatomic, readonly) NSArray *changes;
@property (nonatomic, readonly) NSString *storeID;
@property (nonatomic, readonly) NSDate *timestamp;
@property (nonatomic, readonly) REMChangeToken *token;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountID;
- (id)author;
- (id)changes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)storeID;
- (id)timestamp;
- (id)token;

@end
