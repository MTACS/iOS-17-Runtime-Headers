
@interface VSApplicationControllerAlertAction : NSObject {
    id /* block */  _callback;
    long long  _style;
    NSString * _title;
}

@property (nonatomic, copy) id /* block */ callback;
@property (nonatomic) long long style;
@property (nonatomic, copy) NSString *title;

+ (long long)styleFromString:(id)arg1;

- (void).cxx_destruct;
- (id /* block */)callback;
- (void)setCallback:(id /* block */)arg1;
- (void)setStyle:(long long)arg1;
- (void)setTitle:(id)arg1;
- (long long)style;
- (id)title;

@end
