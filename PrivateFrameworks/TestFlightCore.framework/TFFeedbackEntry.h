
@interface TFFeedbackEntry : NSObject {
    NSString * _identifier;
    NSString * _title;
    unsigned long long  _type;
}

@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (id)identifier;
- (id)initWithType:(unsigned long long)arg1 identifier:(id)arg2 title:(id)arg3;
- (id)title;
- (unsigned long long)type;

@end
