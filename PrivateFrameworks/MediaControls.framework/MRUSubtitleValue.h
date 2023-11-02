
@interface MRUSubtitleValue : NSObject {
    long long  _accessory;
    UIImage * _icon;
    NSString * _text;
}

@property (nonatomic, readonly) long long accessory;
@property (nonatomic, readonly) UIImage *icon;
@property (nonatomic, readonly) NSString *text;

- (void).cxx_destruct;
- (long long)accessory;
- (id)description;
- (id)icon;
- (id)initWithText:(id)arg1 icon:(id)arg2 accessory:(long long)arg3;
- (bool)isEqualToSubtitleValue:(id)arg1;
- (id)text;

@end
