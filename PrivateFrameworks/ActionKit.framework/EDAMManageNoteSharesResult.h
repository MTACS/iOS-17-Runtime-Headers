
@interface EDAMManageNoteSharesResult : FATObject {
    NSArray * _errors;
}

@property (nonatomic, retain) NSArray *errors;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)errors;
- (void)setErrors:(id)arg1;

@end
