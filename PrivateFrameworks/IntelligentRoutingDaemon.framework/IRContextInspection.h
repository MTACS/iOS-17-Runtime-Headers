
@interface IRContextInspection : NSObject {
    NSDate * _date;
    NSString * _foregroundApp;
    NSDictionary * _policies;
}

@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) NSString *foregroundApp;
@property (nonatomic, readonly) NSDictionary *policies;

- (void).cxx_destruct;
- (id)date;
- (id)foregroundApp;
- (id)initWithDate:(id)arg1 policies:(id)arg2 foregroundApp:(id)arg3;
- (id)policies;

@end
