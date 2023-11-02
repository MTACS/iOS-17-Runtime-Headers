
@interface IENLParameters : NSObject {
    NSString * _name;
    NSDictionary * _parameters;
}

@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSDictionary *parameters;

- (void).cxx_destruct;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)parameters;
- (void)setName:(id)arg1;
- (void)setParameters:(id)arg1;

@end
