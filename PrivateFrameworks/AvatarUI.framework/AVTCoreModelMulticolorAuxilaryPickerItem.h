
@interface AVTCoreModelMulticolorAuxilaryPickerItem : NSObject {
    NSString * _identifier;
    NSString * _message;
    NSString * _title;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *message;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 message:(id)arg3;
- (id)message;
- (id)title;

@end
