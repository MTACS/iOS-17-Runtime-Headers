
@interface ATXPhubbingEvents : NSObject <NSSecureCoding> {
    NSArray * _phubbingSessions;
}

@property (nonatomic, readonly, copy) NSArray *phubbingSessions;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPhubbingSessions:(id)arg1;
- (id)phubbingSessions;

@end
