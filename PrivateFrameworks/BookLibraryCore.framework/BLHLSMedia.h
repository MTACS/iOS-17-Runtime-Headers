
@interface BLHLSMedia : NSObject {
    NSString * _name;
    NSString * _type;
    NSURL * _url;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) NSURL *url;

- (void).cxx_destruct;
- (id)description;
- (id)name;
- (void)setPropertiesFromAttributeList:(id)arg1;
- (id)type;
- (id)url;

@end
