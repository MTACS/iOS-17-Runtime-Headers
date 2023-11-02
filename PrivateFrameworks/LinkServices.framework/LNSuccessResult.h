
@interface LNSuccessResult : NSObject <NSCopying, NSSecureCoding> {
    LNAction * _action;
    LNActionAppContext * _actionAppContext;
    NSData * _actionData;
    NSData * _appContextData;
    LNActionOutput * _output;
    NSData * _outputData;
    NSArray * _predictions;
    NSData * _predictionsData;
}

@property (nonatomic, readonly, copy) LNAction *action;
@property (nonatomic, readonly, copy) LNActionAppContext *actionAppContext;
@property (nonatomic, readonly, copy) NSData *actionData;
@property (nonatomic, readonly, copy) NSData *appContextData;
@property (nonatomic, readonly, copy) LNActionOutput *output;
@property (nonatomic, readonly, copy) NSData *outputData;
@property (nonatomic, readonly, copy) NSArray *predictions;
@property (nonatomic, readonly, copy) NSData *predictionsData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)action;
- (id)actionAppContext;
- (id)actionData;
- (id)appContextData;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAction:(id)arg1 output:(id)arg2 actionAppContext:(id)arg3 predictions:(id)arg4;
- (id)initWithActionData:(id)arg1 outputData:(id)arg2 appContextData:(id)arg3 predictionsData:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)output;
- (id)outputData;
- (id)predictions;
- (id)predictionsData;
- (id)verboseDescription;

@end
