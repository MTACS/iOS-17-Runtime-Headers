
@interface FCGroupFont : NSObject {
    NSString * _name;
    NSString * _urlString;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *urlString;

- (void).cxx_destruct;
- (id)init;
- (id)initWithName:(id)arg1 urlString:(id)arg2;
- (id)name;
- (id)urlString;

@end
