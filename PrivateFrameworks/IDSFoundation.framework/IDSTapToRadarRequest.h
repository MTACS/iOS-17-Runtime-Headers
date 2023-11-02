
@interface IDSTapToRadarRequest : NSObject {
    NSString * _message;
    NSString * _title;
}

@property (nonatomic, readonly) NSString *message;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 message:(id)arg2;
- (id)message;
- (id)title;

@end
