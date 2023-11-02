
@interface CKAutoupdatingDateFormatter : NSDateFormatter {
    NSString * _template;
}

@property (nonatomic, copy) NSString *template;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithTemplate:(id)arg1;
- (id)notificationCenter;
- (void)setTemplate:(id)arg1;
- (id)template;
- (void)updateDateFormat;

@end
