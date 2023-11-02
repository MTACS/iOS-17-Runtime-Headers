
@interface ICURLBagMescalConfiguration : NSObject {
    NSArray * _fields;
    NSArray * _headers;
    bool  _shouldIncludePath;
    bool  _shouldSignBody;
}

@property (nonatomic, copy) NSArray *fields;
@property (nonatomic, copy) NSArray *headers;
@property (nonatomic) bool shouldIncludePath;
@property (nonatomic) bool shouldSignBody;

- (void).cxx_destruct;
- (id)description;
- (id)fields;
- (id)headers;
- (void)setFields:(id)arg1;
- (void)setHeaders:(id)arg1;
- (void)setShouldIncludePath:(bool)arg1;
- (void)setShouldSignBody:(bool)arg1;
- (bool)shouldIncludePath;
- (bool)shouldSignBody;

@end
