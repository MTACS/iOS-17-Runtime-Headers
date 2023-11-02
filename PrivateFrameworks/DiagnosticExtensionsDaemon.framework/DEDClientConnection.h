
@interface DEDClientConnection : NSObject <NSSecureCoding> {
    NSNumber * _pid;
}

@property (nonatomic) NSNumber *pid;

+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)pid;
- (void)setPid:(id)arg1;

@end
