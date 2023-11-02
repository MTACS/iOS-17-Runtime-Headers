
@interface ATXFaceSuggestionFocusMode : NSObject <NSSecureCoding> {
    long long  _type;
    NSString * _uuid;
}

@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly, copy) NSString *uuid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 uuid:(id)arg2;
- (long long)type;
- (id)uuid;

@end
