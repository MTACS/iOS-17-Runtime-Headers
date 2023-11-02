
@interface SIRINLURewriteMessage : NSObject <NSSecureCoding> {
    int  _rewriteType;
    NSString * _rewrittenUtterance;
}

@property (nonatomic) int rewriteType;
@property (nonatomic, retain) NSString *rewrittenUtterance;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(int)arg1 utterance:(id)arg2;
- (int)rewriteType;
- (id)rewrittenUtterance;
- (void)setRewriteType:(int)arg1;
- (void)setRewrittenUtterance:(id)arg1;

@end
