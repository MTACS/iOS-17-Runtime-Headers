
@interface EDAMInvalidContactsException : FATException {
    NSArray * _contacts;
    NSString * _parameter;
    NSArray * _reasons;
}

@property (nonatomic, retain) NSArray *contacts;
@property (nonatomic, retain) NSString *parameter;
@property (nonatomic, retain) NSArray *reasons;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)contacts;
- (id)parameter;
- (id)reasons;
- (void)setContacts:(id)arg1;
- (void)setParameter:(id)arg1;
- (void)setReasons:(id)arg1;

@end
