
@interface DockKitCore.DockCoreInfo : NSObject <NSSecureCoding> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  identifier;
    void name;
    void type;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 name:(id)arg2 identifier:(id)arg3;
- (id)initWithUuidString:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)name;
- (long long)type;

@end
