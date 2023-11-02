
@interface ATXTimeScheduledWidget : NSObject <NSSecureCoding> {
    NSString * _container;
    NSString * _extensionId;
    long long  _family;
    ATXCustomIntentDescription * _intentDescription;
    NSString * _kind;
}

@property (nonatomic, readonly, copy) NSString *container;
@property (nonatomic, readonly, copy) NSString *extensionId;
@property (nonatomic, readonly) long long family;
@property (nonatomic, readonly) ATXCustomIntentDescription *intentDescription;
@property (nonatomic, readonly, copy) NSString *kind;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)container;
- (void)encodeWithCoder:(id)arg1;
- (id)extensionId;
- (long long)family;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithContainer:(id)arg1 kind:(id)arg2 extensionId:(id)arg3 family:(long long)arg4;
- (id)initWithContainer:(id)arg1 kind:(id)arg2 extensionId:(id)arg3 family:(long long)arg4 intentDescription:(id)arg5;
- (id)intentDescription;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXTimeScheduledWidget:(id)arg1;
- (id)kind;

@end
