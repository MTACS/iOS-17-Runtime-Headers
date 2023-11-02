
@interface VSTwoFactorEntryButton : NSObject {
    NSString * _text;
    NSString * _type;
}

@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSString *type;

- (void).cxx_destruct;
- (id)init;
- (void)setText:(id)arg1;
- (void)setType:(id)arg1;
- (id)text;
- (id)type;

@end
