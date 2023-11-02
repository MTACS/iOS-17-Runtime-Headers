
@interface CHSWidgetKeysBox : NSObject <NSSecureCoding> {
    NSArray * _widgetKeys;
}

@property (nonatomic, readonly, copy) NSArray *widgetKeys;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithWidgetKeys:(id)arg1;
- (id)widgetKeys;

@end
