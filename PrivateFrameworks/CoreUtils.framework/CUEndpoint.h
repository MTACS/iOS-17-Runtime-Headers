
@interface CUEndpoint : NSObject {
    NSString * _identifier;
}

@property (nonatomic, copy) NSString *identifier;

- (void).cxx_destruct;
- (id)description;
- (id)identifier;
- (void)setIdentifier:(id)arg1;

@end
