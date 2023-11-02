
@interface BPSWindowState : NSObject <NSSecureCoding> {
    id  _aggregate;
    bool  _completed;
    NSString * _identifier;
}

@property (nonatomic, retain) id aggregate;
@property (nonatomic) bool completed;
@property (nonatomic, retain) NSString *identifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)aggregate;
- (bool)completed;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 aggregate:(id)arg2 completed:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (id)metadata;
- (void)setAggregate:(id)arg1;
- (void)setCompleted:(bool)arg1;
- (void)setIdentifier:(id)arg1;

@end
