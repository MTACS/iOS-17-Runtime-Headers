
@interface CKCustomAppMenuItem : NSObject <CKAppMenuItem> {
    NSString * ___ck_displayName;
    id  ___ck_identifier;
}

@property (nonatomic, readonly) NSString *__ck_displayName;
@property (nonatomic, readonly) id __ck_identifier;

- (void).cxx_destruct;
- (id)__ck_displayName;
- (id)__ck_identifier;
- (id)__ck_imageForTraitCollection:(id)arg1;
- (id)initWithIdentifier:(id)arg1 displayName:(id)arg2;

@end
