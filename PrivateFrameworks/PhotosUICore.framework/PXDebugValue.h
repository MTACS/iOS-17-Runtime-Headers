
@interface PXDebugValue : NSObject {
    NSString * _label;
}

@property (nonatomic, readonly) unsigned long long highlightStyle;
@property (nonatomic, readonly) NSString *label;

- (void).cxx_destruct;
- (unsigned long long)highlightStyle;
- (id)initWithLabel:(id)arg1;
- (id)label;

@end
