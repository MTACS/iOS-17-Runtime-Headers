
@interface SBSRemoteContentAlert : NSObject <NSSecureCoding> {
    NSMutableArray * _actions;
    NSString * _message;
    SBSRemoteContentAlertAction * _preferredAction;
    long long  _preferredStyle;
    NSString * _title;
}

@property (nonatomic, readonly) NSArray *actions;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, readonly) long long preferredStyle;
@property (nonatomic, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actions;
- (void)addAction:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 message:(id)arg2 preferredStyle:(long long)arg3;
- (bool)isEqual:(id)arg1;
- (id)message;
- (long long)preferredStyle;
- (void)setMessage:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
