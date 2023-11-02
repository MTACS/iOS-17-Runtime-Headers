
@interface MUFactoidViewModel : NSObject <MUFactoidViewModel>

@property (nonatomic, readonly) UIColor *darkSymbolColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool shouldReverseForRTLLayout;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIColor *symbolColor;
@property (nonatomic, readonly) NSString *symbolName;
@property (nonatomic, readonly) NSString *titleString;
@property (nonatomic, readonly) NSString *valueString;

+ (id)darkSymbolColorWithGEOColor:(id)arg1;
+ (unsigned long long)maximumFractionDigitsForFactoid:(id)arg1;
+ (unsigned long long)roundingModeForFactoid:(id)arg1;
+ (id)symbolColorWithGEOColor:(id)arg1;
+ (id)viewModelForFactoid:(id)arg1;
+ (id)viewModelsFromFactoids:(id)arg1;

- (id)buildSymbolWithFont:(id)arg1;
- (id)darkSymbolColor;
- (bool)shouldReverseForRTLLayout;
- (id)symbolColor;
- (id)symbolName;
- (id)titleString;
- (id)valueString;

@end
