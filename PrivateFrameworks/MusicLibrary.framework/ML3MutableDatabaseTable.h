
@interface ML3MutableDatabaseTable : ML3DatabaseTable

@property (nonatomic, copy) NSArray *columns;
@property (nonatomic, copy) NSArray *foreignKeyConstraints;
@property (nonatomic, copy) NSString *name;

- (void)setColumns:(id)arg1;
- (void)setForeignKeyConstraints:(id)arg1;
- (void)setName:(id)arg1;

@end
