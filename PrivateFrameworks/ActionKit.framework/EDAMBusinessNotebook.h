
@interface EDAMBusinessNotebook : FATObject {
    NSString * _notebookDescription;
    NSNumber * _privilege;
    NSNumber * _recommended;
}

@property (nonatomic, retain) NSString *notebookDescription;
@property (nonatomic, retain) NSNumber *privilege;
@property (nonatomic, retain) NSNumber *recommended;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)notebookDescription;
- (id)privilege;
- (id)recommended;
- (void)setNotebookDescription:(id)arg1;
- (void)setPrivilege:(id)arg1;
- (void)setRecommended:(id)arg1;

@end
