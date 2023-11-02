
@interface AAUISpecifierSpinnerController : NSObject <AAUISpinnerController> {
    PSSpecifier * _specifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithSpecifier:(id)arg1;
- (void)startSpinning;
- (void)stopSpinning;

@end
