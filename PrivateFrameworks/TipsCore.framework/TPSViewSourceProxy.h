
@interface TPSViewSourceProxy : NSObject {
    NSString * _viewMethod;
}

@property (nonatomic, retain) NSString *viewMethod;

+ (id)proxyWithViewMethod:(id)arg1;

- (void).cxx_destruct;
- (bool)isEqual:(id)arg1;
- (void)setViewMethod:(id)arg1;
- (id)viewMethod;

@end
