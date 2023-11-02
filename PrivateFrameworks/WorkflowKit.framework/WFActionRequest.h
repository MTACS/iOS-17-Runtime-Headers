
@interface WFActionRequest : NSObject <NSCopying> {
    NSString * _actionIdentifier;
    WFAction * _result;
    NSDictionary * _serializedParameters;
}

@property (nonatomic, readonly) NSString *actionIdentifier;
@property (nonatomic, retain) WFAction *result;
@property (nonatomic, readonly) NSDictionary *serializedParameters;

- (void).cxx_destruct;
- (id)actionIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithActionIdentifier:(id)arg1 serializedParameters:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)result;
- (id)serializedParameters;
- (void)setResult:(id)arg1;

@end
