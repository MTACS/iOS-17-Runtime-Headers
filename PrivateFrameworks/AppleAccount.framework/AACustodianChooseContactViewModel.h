
@interface AACustodianChooseContactViewModel : NSObject <AAChooseContactViewModel> {
    NSString * selectButtonText;
    NSString * title;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *selectButtonText;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *title;

- (void).cxx_destruct;
- (id)selectButtonText;
- (id)title;

@end
