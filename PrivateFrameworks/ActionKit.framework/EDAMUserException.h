
@interface EDAMUserException : FATException {
    NSNumber * _errorCode;
    NSString * _parameter;
}

@property (nonatomic, retain) NSNumber *errorCode;
@property (nonatomic, retain) NSString *parameter;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)errorCode;
- (id)parameter;
- (void)setErrorCode:(id)arg1;
- (void)setParameter:(id)arg1;

@end
