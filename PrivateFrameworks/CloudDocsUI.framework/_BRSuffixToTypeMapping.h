
@interface _BRSuffixToTypeMapping : NSObject {
    NSString * _suffix;
    NSString * _type;
}

@property (nonatomic, copy) NSString *suffix;
@property (nonatomic, copy) NSString *type;

- (void).cxx_destruct;
- (bool)appliesToType:(id)arg1;
- (void)setSuffix:(id)arg1;
- (void)setType:(id)arg1;
- (id)suffix;
- (id)type;

@end
