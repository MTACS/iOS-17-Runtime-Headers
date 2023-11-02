
@interface EDAMPublishing : FATObject {
    NSNumber * _ascending;
    NSNumber * _order;
    NSString * _publicDescription;
    NSString * _uri;
}

@property (nonatomic, retain) NSNumber *ascending;
@property (nonatomic, retain) NSNumber *order;
@property (nonatomic, retain) NSString *publicDescription;
@property (nonatomic, retain) NSString *uri;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)ascending;
- (id)order;
- (id)publicDescription;
- (void)setAscending:(id)arg1;
- (void)setOrder:(id)arg1;
- (void)setPublicDescription:(id)arg1;
- (void)setUri:(id)arg1;
- (id)uri;

@end
