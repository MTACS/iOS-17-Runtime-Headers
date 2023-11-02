
@interface SIRINLUTurnContext : NSObject <NSSecureCoding> {
    SIRINLULegacyNLContext * _legacyNLContext;
    SIRINLULegacyNLContext * _legacyNLContextNullable;
    SIRINLUNLContext * _nlContext;
    SIRINLUNLContext * _nlContextNullable;
}

@property (nonatomic, retain) SIRINLULegacyNLContext *legacyNLContext;
@property (nonatomic, retain) SIRINLULegacyNLContext *legacyNLContextNullable;
@property (nonatomic, retain) SIRINLUNLContext *nlContext;
@property (nonatomic, retain) SIRINLUNLContext *nlContextNullable;

+ (id)createEmptyPlaceholderLegacyNLContext;
+ (id)createEmptyPlaceholderNLContext;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLegacyNLContext:(id)arg1;
- (id)initWithNLContext:(id)arg1;
- (id)initWithNLContext:(id)arg1 legacyNLContext:(id)arg2;
- (id)legacyNLContext;
- (id)legacyNLContextNullable;
- (id)nlContext;
- (id)nlContextNullable;
- (void)setLegacyNLContext:(id)arg1;
- (void)setLegacyNLContextNullable:(id)arg1;
- (void)setNlContext:(id)arg1;
- (void)setNlContextNullable:(id)arg1;

@end
