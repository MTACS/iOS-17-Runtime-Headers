
@interface UNNotificationTopic : NSObject <NSCopying, NSSecureCoding> {
    NSString * _displayName;
    NSString * _identifier;
    unsigned long long  _priority;
    NSString * _sortIdentifier;
}

@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) unsigned long long priority;
@property (nonatomic, readonly, copy) NSString *sortIdentifier;

+ (bool)supportsSecureCoding;
+ (id)topicWithIdentifier:(id)arg1 displayName:(id)arg2 priority:(unsigned long long)arg3 sortIdentifier:(id)arg4;

- (void).cxx_destruct;
- (id)_description;
- (id)_initWithIdentifier:(id)arg1 displayName:(id)arg2 priority:(unsigned long long)arg3 sortIdentifier:(id)arg4;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)priority;
- (id)sortIdentifier;

@end
