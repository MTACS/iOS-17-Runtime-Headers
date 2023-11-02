
@interface POWSTrustActionType : POWSTrustBaseRequestType {
    NSString * _mustUnderstand;
    NSString * _stringValue;
}

@property (nonatomic, copy) NSString *mustUnderstand;
@property (nonatomic, copy) NSString *stringValue;

+ (id)definition;

- (void).cxx_destruct;
- (id)description;
- (id)mustUnderstand;
- (void)setMustUnderstand:(id)arg1;
- (void)setStringValue:(id)arg1;
- (id)stringValue;

@end
