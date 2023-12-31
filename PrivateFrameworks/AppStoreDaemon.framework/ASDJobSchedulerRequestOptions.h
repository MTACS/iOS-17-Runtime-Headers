
@interface ASDJobSchedulerRequestOptions : ASDRequestOptions {
    bool  _verbose;
}

@property (nonatomic) bool verbose;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setVerbose:(bool)arg1;
- (bool)verbose;

@end
