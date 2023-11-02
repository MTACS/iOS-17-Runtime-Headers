
@interface MXCrashDiagnosticObjectiveCExceptionReason : NSObject <NSSecureCoding> {
    NSArray * _arguments;
    NSString * _className;
    NSString * _composedMessage;
    NSString * _exceptionName;
    NSString * _exceptionType;
    NSString * _formatString;
}

@property (copy) NSArray *arguments;
@property (copy) NSString *className;
@property (copy) NSString *composedMessage;
@property (copy) NSString *exceptionName;
@property (copy) NSString *exceptionType;
@property (copy) NSString *formatString;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)JSONRepresentation;
- (id)arguments;
- (id)className;
- (id)composedMessage;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)exceptionName;
- (id)exceptionType;
- (id)formatString;
- (id)initWithCoder:(id)arg1;
- (id)initWithComposedMessage:(id)arg1 formatString:(id)arg2 arguments:(id)arg3 type:(id)arg4 className:(id)arg5 exceptionName:(id)arg6;
- (void)setArguments:(id)arg1;
- (void)setClassName:(id)arg1;
- (void)setComposedMessage:(id)arg1;
- (void)setExceptionName:(id)arg1;
- (void)setExceptionType:(id)arg1;
- (void)setFormatString:(id)arg1;
- (id)toDictionary;

@end
