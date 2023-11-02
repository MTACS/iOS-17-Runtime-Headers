
@interface DMCProfileItemDetail : NSObject {
    NSString * _detail;
    bool  _isTrusted;
    NSString * _title;
    NSAttributedString * _trustText;
}

@property (nonatomic, readonly) NSString *detail;
@property (nonatomic, readonly) bool isTrusted;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSAttributedString *trustText;

+ (id)itemDetailWithTitle:(id)arg1 detail:(id)arg2;

- (void).cxx_destruct;
- (id)detail;
- (id)initWithTitle:(id)arg1 detail:(id)arg2 isTrusted:(bool)arg3 trustText:(id)arg4;
- (bool)isTrusted;
- (id)title;
- (id)trustText;

@end
