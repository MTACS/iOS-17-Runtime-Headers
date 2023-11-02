
@interface SSMLParseError : NSObject {
    NSString * _error;
    NSString * _hint;
    NSString * _location;
}

@property (nonatomic, retain) NSString *error;
@property (nonatomic, retain) NSString *hint;
@property (nonatomic, retain) NSString *location;

+ (id)errorWith:(id)arg1 hint:(id)arg2 errorLocation:(id)arg3;

- (void).cxx_destruct;
- (id)error;
- (id)hint;
- (id)location;
- (void)setError:(id)arg1;
- (void)setHint:(id)arg1;
- (void)setLocation:(id)arg1;

@end
