
@interface SWDatastore : NSObject {
    NSString * _JSONString;
}

@property (nonatomic, readonly, copy) NSString *JSONString;

- (void).cxx_destruct;
- (id)JSONString;
- (id)description;
- (id)initWithJSONString:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
