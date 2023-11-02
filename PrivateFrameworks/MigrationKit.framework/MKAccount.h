
@interface MKAccount : NSObject {
    NSString * _name;
    NSString * _type;
}

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *type;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (void)setType:(id)arg1;
- (id)type;

@end
