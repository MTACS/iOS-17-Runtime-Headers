
@interface CPActivitySessionEvent : NSObject <NSSecureCoding> {
    void item;
    void originatorID;
    void queueItemType;
    void type;
    void url;
}

@property (nonatomic, readonly) long long hash;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
