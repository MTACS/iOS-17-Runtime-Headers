
@interface HRSpeedBumpItem : NSObject {
    NSString * _body;
    NSArray * _bubbles;
    long long  _category;
    id  _delegate;
    NSString * _title;
}

@property (nonatomic, readonly) NSString *body;
@property (nonatomic, readonly) NSArray *bubbles;
@property (nonatomic, readonly) long long category;
@property (nonatomic) id delegate;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)body;
- (id)bubbles;
- (long long)category;
- (id)delegate;
- (id)initWithTitle:(id)arg1 body:(id)arg2 bubbles:(id)arg3 category:(long long)arg4;
- (void)setDelegate:(id)arg1;
- (id)title;

@end
