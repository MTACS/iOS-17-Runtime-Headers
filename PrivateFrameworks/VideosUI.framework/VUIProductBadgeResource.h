
@interface VUIProductBadgeResource : NSObject {
    NSString * _name;
    bool  _templated;
}

@property (nonatomic, copy) NSString *name;
@property (getter=isTemplated, nonatomic) bool templated;

- (void).cxx_destruct;
- (id)init;
- (bool)isTemplated;
- (id)name;
- (void)setName:(id)arg1;
- (void)setTemplated:(bool)arg1;

@end
