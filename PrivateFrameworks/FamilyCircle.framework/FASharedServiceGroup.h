
@interface FASharedServiceGroup : NSObject {
    NSString * _footerText;
    NSNumber * _groupID;
    NSString * _headerText;
    NSArray * _services;
}

@property (nonatomic, retain) NSString *footerText;
@property (nonatomic, retain) NSNumber *groupID;
@property (nonatomic, retain) NSString *headerText;
@property (nonatomic, retain) NSArray *services;

- (void).cxx_destruct;
- (id)description;
- (id)footerText;
- (id)groupID;
- (id)headerText;
- (id)initWithServerResponse:(id)arg1;
- (id)services;
- (void)setFooterText:(id)arg1;
- (void)setGroupID:(id)arg1;
- (void)setHeaderText:(id)arg1;
- (void)setServices:(id)arg1;

@end
