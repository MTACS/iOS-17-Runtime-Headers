
@interface AMSDelegateAction : NSObject {
    NSString * _identifier;
    NSDictionary * _parameters;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSDictionary *parameters;

- (void).cxx_destruct;
- (id)actionPayload;
- (id)description;
- (id)identifier;
- (id)initWithDialogAction:(id)arg1;
- (id)initWithIdentifier:(id)arg1 parameters:(id)arg2;
- (id)parameters;

@end
