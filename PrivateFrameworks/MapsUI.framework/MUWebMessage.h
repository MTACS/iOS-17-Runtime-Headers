
@interface MUWebMessage : NSObject <NSCopying> {
    <NSCopying> * _arguments;
    NSNumber * _callNumber;
    NSString * _callee;
    NSString * _caller;
    NSString * _errorMessage;
    NSString * _method;
    <NSCopying> * _result;
    NSString * _status;
    NSString * _type;
}

@property (nonatomic, readonly, copy) NSDictionary *JSONObject;
@property (nonatomic, copy) <NSCopying> *arguments;
@property (nonatomic, copy) NSNumber *callNumber;
@property (nonatomic, copy) NSString *callee;
@property (nonatomic, copy) NSString *caller;
@property (nonatomic, copy) NSString *errorMessage;
@property (nonatomic, copy) NSString *method;
@property (nonatomic, copy) <NSCopying> *result;
@property (nonatomic, copy) NSString *status;
@property (nonatomic, copy) NSString *type;

- (void).cxx_destruct;
- (id)JSONObject;
- (id)arguments;
- (id)callNumber;
- (id)callee;
- (id)caller;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)errorMessage;
- (id)initWithJSONObject:(id)arg1;
- (id)method;
- (id)result;
- (void)setArguments:(id)arg1;
- (void)setCallNumber:(id)arg1;
- (void)setCallee:(id)arg1;
- (void)setCaller:(id)arg1;
- (void)setErrorMessage:(id)arg1;
- (void)setMethod:(id)arg1;
- (void)setResult:(id)arg1;
- (void)setStatus:(id)arg1;
- (void)setType:(id)arg1;
- (id)status;
- (id)type;

@end
