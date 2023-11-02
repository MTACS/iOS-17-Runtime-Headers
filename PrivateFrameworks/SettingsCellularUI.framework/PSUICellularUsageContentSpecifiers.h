
@interface PSUICellularUsageContentSpecifiers : NSObject {
    NSMutableArray * _appSpecifiers;
    NSArray * _leadingContentSpecifiers;
    NSArray * _trailingContentSpecifiers;
}

@property (nonatomic, retain) NSMutableArray *appSpecifiers;
@property (nonatomic, retain) NSArray *leadingContentSpecifiers;
@property (nonatomic, retain) NSArray *trailingContentSpecifiers;

- (void).cxx_destruct;
- (id)appSpecifiers;
- (id)leadingContentSpecifiers;
- (void)setAppSpecifiers:(id)arg1;
- (void)setLeadingContentSpecifiers:(id)arg1;
- (void)setTrailingContentSpecifiers:(id)arg1;
- (id)specifiers;
- (id)trailingContentSpecifiers;

@end
