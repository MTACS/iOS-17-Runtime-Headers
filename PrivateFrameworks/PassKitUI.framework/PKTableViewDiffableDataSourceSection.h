
@interface PKTableViewDiffableDataSourceSection : NSObject <PKIdentifiable> {
    NSString * _footer;
    NSString * _identifier;
    NSString * _title;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *footer;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *identifier;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)footer;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setFooter:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
