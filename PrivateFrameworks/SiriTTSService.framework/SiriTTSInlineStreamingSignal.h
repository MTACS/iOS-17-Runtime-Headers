
@interface SiriTTSInlineStreamingSignal : NSObject <NSSecureCoding> {
    void identifier;
    void text;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *text;

+ (void)setSupportsSecureCoding:(bool)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithText:(id)arg1 identifier:(id)arg2;
- (id)text;

@end
