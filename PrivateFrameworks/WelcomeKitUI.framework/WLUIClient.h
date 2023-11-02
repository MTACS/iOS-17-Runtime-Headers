
@interface WLUIClient : NSObject {
    NSString * _brand;
    NSString * _hostname;
    NSString * _model;
    NSString * _name;
}

@property (nonatomic, copy) NSString *brand;
@property (nonatomic, copy) NSString *hostname;
@property (nonatomic, copy) NSString *model;
@property (nonatomic, copy) NSString *name;

- (void).cxx_destruct;
- (id)brand;
- (id)hostname;
- (id)initWithHostname:(id)arg1 brand:(id)arg2 model:(id)arg3 name:(id)arg4;
- (id)model;
- (id)name;
- (void)setBrand:(id)arg1;
- (void)setHostname:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setName:(id)arg1;

@end
